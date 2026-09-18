/*
 * Converter.cpp
 *
 *  Created on: Jan 30, 2026
 *      Author: Job
 */


#include "Converter.h"


Converter::Converter(
		ADC_HandleTypeDef* adc1Handle,
		TIM_HandleTypeDef* tim3Handle,
		TIM_HandleTypeDef* tim8Handle
		) :
		_adc1(adc1Handle),
		_tim3(tim3Handle),
		_tim8(tim8Handle)
		{}

Converter::~Converter() {}

// Initialize power converter
void Converter::init() {
	initPwm();
	initAdc();
}

// Init PWM signal
void Converter::initPwm() {
	HAL_TIM_PWM_Start(_tim8, TIM_CHANNEL_1);
//	HAL_TIM_PWM_Start(_tim8, TIM_CHANNEL_3);

	HAL_TIMEx_PWMN_Start(_tim8, TIM_CHANNEL_1);
//	HAL_TIMEx_PWMN_Start(_tim8, TIM_CHANNEL_3);

	// Set initial duty cycle to 30%
	SetPwmDutyCycle(_tim8, TIM_CHANNEL_1, 30);
//	setPwmFrequency(_tim8, TIM_CHANNEL_1, 50000);
}

//
void Converter::initAdc() {
	// Start ADC with DMA, then timer 3 (order matters)
	HAL_ADC_Start_DMA(_adc1, adc1Buf, ADC_BUFFER_SIZE);
	HAL_TIM_Base_Start(_tim3);
}

// Determines the PWM duty cycle based on ARR register, so works with varying period.
// NOTE also inverts duty cycle!
void Converter::SetPwmDutyCycle(TIM_HandleTypeDef *htim, uint32_t channel, float duty) {
	// Protection
    if (duty < 0.0f) duty = 0.0f;
    else if (duty > 100.0f) duty = 100.0f;

    dutyCycle = duty;														// Save dutycycle target
	duty = 100.0f-duty;														// Invert for this application
    uint32_t period = __HAL_TIM_GET_AUTORELOAD(htim);
    uint32_t compare = (uint32_t)((period + 1) * duty / 100.0f);
    __HAL_TIM_SET_COMPARE(htim, channel, compare);
}

void Converter::setPwmFrequency(TIM_HandleTypeDef *htim, uint32_t channel, uint32_t frequency) {
    uint32_t prescaler = htim->Instance->PSC;								// Get current prescaler value
    uint32_t arr = (APB2_CLOCK / ((prescaler + 1) * frequency)) - 1;		// Determine Auto Reload Register value for set frequency

    __HAL_TIM_SET_AUTORELOAD(htim, arr);
    SetPwmDutyCycle(htim, channel, dutyCycle);								// Adjusting ARR also requires compare register update
}

// ADC completed
void Converter::adcComplete(ADC_HandleTypeDef* hadc) {
	if (hadc->Instance == ADC1) {
		vBatAdc = adc1Buf[0];		// PA0 battery voltage
		iLAdc = adc1Buf[1];			// PA1 inductor current
		// adc1Buf[2] is used for 2nd current sensor, which I blew :)
		vOutAdc = adc1Buf[3];		// PA2 boost converter output voltage
		tBatAdc = adc1Buf[4];		// PB0 battery temperature sensor

		int32_t iAdcCorrected = iLAdc - I_ADC_OFFSET;		// Correct for offset of current sense signal, TODO check if direction is right

		// Convert to volts and amps
		vBatVolt = (vBatAdc / 4095.0f) * 3.3f * ((float(VBAT_R1) + float(VBAT_R2)) / float(VBAT_R2));
		iLampere = (iAdcCorrected / 4095.0f) * 3.3f;
		vOutVolt = (vOutAdc / 4095.0f) * 3.3f * ((float(VOUT_R1) + float(VOUT_R2)) / float(VOUT_R2));
	}

	// Trigger control loop
	boostControlLoop();
}

// Compute the converter output PWM using the available inputs
void Converter::boostControlLoop() {

	// Output voltage loop
	if (vC_counter == 1) {
		vC_setpoint = voltageSetpoint;
		vC_error = vC_setpoint - vOutVolt;
		vC_int = vC_int + vC_error * vC_Ts;
		vC_out = P_vC * vC_error + I_vC * vC_int;
		vC_counter = time_divisor_vC;
	}
	else {
		vC_counter = vC_counter - 1;
	}

	// Output current loop
	iL_setpoint = vC_out;
	iL_error = iL_setpoint - iLampere;
	iL_int = iL_int + iL_error * iL_Ts;
	iL_out = P_iL * iL_error + I_iL * iL_int;

	// Set PWM duty
	uint8_t newDuty = iL_out * 100;
//	setPwmDuty(newDuty);
}

// Boost converter output voltage setpoint change request
void Converter::setVoltageSetpoint(float reqVoltageSetp) {
	voltageSetpoint = reqVoltageSetp;
}

// Boost converter output current setpoint change request
void Converter::setCurrentSetpoint(float reqCurrentSetp) {
	currentSetpoint = reqCurrentSetp;
}

float Converter::getVoltageSetpoint() {
	return voltageSetpoint;
}

float Converter::getCurrentSetpoint() {
	return currentSetpoint;
}



