/*
 * Statemachine.cpp
 *
 *  Created on: Oct 5, 2025
 *      Author: jobme
 */

// Voltage dividers: (high / low resistor)
// 1) Vbatt 5.6k/10k
// 2) Iinductor 3.3k/10k
// 3) Vout 5.6k/1k

// Inputs and outputs
// PWM TIM8 out: PB9 & PB1 (iNverted)
// ADC TIM6
// ADC1_IN1: PA0 -- Vbat
// ADC1_IN2: PA1 -- iL
// ADC1_IN3: PA2 -- Vout
// UART4: PC10 (TX) PC11 (RX)
// SPI: PA4 (NSS), PA5 (SCK), PA6 (MISO), PA7 (MOSI)
// USB: PA11 (DM), PA12 (DP)
// UCPD: PB6 (CC1), PB4 (CC2), PA9 (DBCC1), PA10 (DBCC2)


// TODO
// Reading ADC inputs
// Setting TIM8 duty cycle (and possibly frequency, deadtime, etc.)
// Implement control loop, run it at the speed of ADC (faster sampling has no benefit)
// State machine implementation
// PWM deadtime and frequency settings

#include "Statemachine.h"

Statemachine::Statemachine(
	UART_HandleTypeDef* uartHandle,
	ADC_HandleTypeDef* adc1Handle,
	TIM_HandleTypeDef* tim3Handle,
	TIM_HandleTypeDef* tim8Handle,
	SPI_HandleTypeDef* spi1Handle
	) :
	_uart(uartHandle),
	_adc1(adc1Handle),
	_tim3(tim3Handle),
	_tim8(tim8Handle),
	_spi1(spi1Handle)
	{}

Statemachine::~Statemachine() {}

// Init statemachine, runs once before iteration
void Statemachine::init() {
	initAdc();
	initPwm();
}

// Statemachine loop, runs at 1kHz till end of time
void Statemachine::iteration() {

	// Example Virtual Com Port message:
//	uint8_t msg[] = "Hello from STM32G431\r\n";
//	CDC_Transmit_FS(msg, sizeof(msg)-1);
}

// ADC complete
void Statemachine::adcComplete(ADC_HandleTypeDef* hadc) {
	if (hadc->Instance == ADC1) {
		vBat = adc1Buf[0];		// PA0 battery voltage
		iL = adc1Buf[1];		// PA1 inductor current
		vOut = adc1Buf[2];		// PA2 boost converter output voltage
	}
}

// Get ADC readings TODO TBD remove?
void Statemachine::getMeasurements() {

}

// Set PWM duty cycle
void Statemachine::setPwmDuty(int duty) {

}

// Initialize boost converter PWM
void Statemachine::initPwm() {
	HAL_TIM_PWM_Start(_tim8, TIM_CHANNEL_3);
	HAL_TIMEx_PWMN_Start(_tim8, TIM_CHANNEL_3);

	// Set initial duty cycle to 50%
	__HAL_TIM_SET_COMPARE(_tim8, TIM_CHANNEL_3, 50);
}

//
void Statemachine::initAdc() {
	HAL_TIM_Base_Start(_tim3);
//	HAL_Delay(1);  // 1 ms
	HAL_ADC_Start_DMA(_adc1, adc1Buf, 3);
}


