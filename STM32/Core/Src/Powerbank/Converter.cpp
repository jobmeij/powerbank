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
	HAL_TIM_PWM_Start(_tim8, TIM_CHANNEL_3);
	HAL_TIMEx_PWMN_Start(_tim8, TIM_CHANNEL_3);

	// Set initial duty cycle to 50%
	__HAL_TIM_SET_COMPARE(_tim8, TIM_CHANNEL_3, 100);		// Set init duty cycle to 100% (high side mosfet open 100% of time, low side closed)
}

//
void Converter::initAdc() {
	// Start ADC with DMA, then timer 3 (order matters)
	HAL_ADC_Start_DMA(_adc1, adc1Buf, ADC_BUFFER_SIZE);
	HAL_TIM_Base_Start(_tim3);
}

// Set boost converter duty cycle % (0-100)
void Converter::setPwmDuty(uint8_t duty) {
	if (duty >= 0 || duty <= 100) {
		__HAL_TIM_SET_COMPARE(_tim8, TIM_CHANNEL_3, duty);
	}
}

void Converter::setPwmFrequency(uint16_t frequency) {
	// TODO
}

// ADC completed
void Converter::adcComplete(ADC_HandleTypeDef* hadc) {
	if (hadc->Instance == ADC1) {
		vBatAdc = adc1Buf[0];		// PA0 battery voltage
		iLAdc = adc1Buf[1];			// PA1 inductor current
		vOutAdc = adc1Buf[2];		// PA2 boost converter output voltage

		// Convert to actual values
		vBatVolt = (vBatAdc / 4095) * 3.3 * VBAT_SCALE;
		iLampere = (iLAdc / 4095) * 3.3 * CURR_SCALE;
		vOutVolt = (vOutAdc / 4095) * 3.3 * VOUT_SCALE;
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
	setPwmDuty(newDuty);
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



