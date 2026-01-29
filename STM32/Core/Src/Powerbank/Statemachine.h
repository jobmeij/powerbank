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
// ADC1 IN1 PA0 TODO add 2 more channels
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
	void getMeasurements();
	void setPwmDuty(int duty);
	void initAdc();
	void initPwm();

	// Classes

	// Private variables
	State currentState;
	uint32_t adc1Buf[3];		// Buffer for adc1
	uint32_t vBat = 0;			// Battery voltage
	uint32_t iL = 0;			// Measured inductor current
	uint32_t vOut = 0;			// Boost output voltage

};



#endif /* STATEMACHINE_H_ */
