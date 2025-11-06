/*
 * Statemachine.cpp
 *
 *  Created on: Oct 5, 2025
 *      Author: jobme
 */

#include "Statemachine.h"

Statemachine::Statemachine(
	UART_HandleTypeDef* uartHandle,
	ADC_HandleTypeDef* adc1Handle,
	TIM_HandleTypeDef* tim8Handle
	) :
	_huart(uartHandle),
	_adc1(adc1Handle),
	_tim8(tim8Handle)
	{}

Statemachine::~Statemachine() {}

// Init statemachine, runs once before iteration
void Statemachine::init() {


}

// Statemachine loop, runs at 1kHz till end of time
void Statemachine::iteration() {


	// Example Virtual Com Port message:
//	uint8_t msg[] = "Hello from STM32G431\r\n";
//	CDC_Transmit_FS(msg, sizeof(msg)-1);
}
