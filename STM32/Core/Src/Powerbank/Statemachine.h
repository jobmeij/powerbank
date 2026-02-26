/*
 * StateMachine.h
 *
 *  Created on: Oct 5, 2025
 *      Author: jobme
 */

#ifndef STATEMACHINE_H_
#define STATEMACHINE_H_

// Includes
#include "stm32g4xx_hal.h"
#include "usb_device.h"
#include "usbd_cdc_if.h"
#include <States.h>
#include <Definitions.h>
#include <Converter.h>


class Statemachine {
public:
	Statemachine(
			UART_HandleTypeDef* uartHandle,
			ADC_HandleTypeDef* adc1Handle,
			TIM_HandleTypeDef* tim3Handle,
			TIM_HandleTypeDef* tim8Handle,
			SPI_HandleTypeDef* spi1Handle
			);				// Constructor
	virtual ~Statemachine();	// Destructor

	// Public functions
	void init();
	void iteration();
	void adcComplete(ADC_HandleTypeDef* hadc);

	// Public variables
	State getState();


private:
	// Handles
	UART_HandleTypeDef* _uart;
	ADC_HandleTypeDef* _adc1;
	TIM_HandleTypeDef* _tim3;
	TIM_HandleTypeDef* _tim8;
	SPI_HandleTypeDef* _spi1;

	// Functions
	void setState(State requestedState);

	// Classes


	// Private variables
	State currentState;


	Converter converter;

};



#endif /* STATEMACHINE_H_ */
