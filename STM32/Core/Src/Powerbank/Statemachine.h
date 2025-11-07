/*
 * StateMachine.h
 *
 *  Created on: Oct 5, 2025
 *      Author: jobme
 */

// Notes:
// https://github.com/WeActStudio/WeActStudio.STM32G431CoreBoard
// STM32G431 (8MHz HSE) enabled devices and corresponding pins:
// PWM output TIM8 CH3, High side mosfet PB9, TIM8 CH3N (inverted) low side mosfet PB1
// Blue led PC6
// UART4 RX PC11 TX PC10
// ADC1 IN1 PA0
// USB P and N PA12 and PA11
// SPI1 SCK PA5 MISO PA6 MOSI PA7 NSS PA4

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_

// Includes
#include "stm32g4xx_hal.h"
#include "States.h"
#include "usb_device.h"
#include "usbd_cdc_if.h"


class Statemachine {
public:
	Statemachine(
			UART_HandleTypeDef* uartHandle,
			ADC_HandleTypeDef* adc1Handle,
			TIM_HandleTypeDef* tim8Handle,
			SPI_HandleTypeDef* spi1Handle
			);				// Constructor
	virtual ~Statemachine();	// Destructor

	// Public functions
	void init();
	void iteration();

	// Public variables
	State getState();


private:
	// Handles
	UART_HandleTypeDef* _uart;
	ADC_HandleTypeDef* _adc1;
	TIM_HandleTypeDef* _tim8;
	SPI_HandleTypeDef* _spi1;

	// Classes

	// Private variables
	State currentState;

};



#endif /* STATEMACHINE_H_ */
