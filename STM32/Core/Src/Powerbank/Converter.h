/*
 * Converter.h
 *
 *  Created on: Jan 30, 2026
 *      Author: Job
 */

#ifndef CONVERTER_H_
#define CONVERTER_H_

// Includes
#include "stm32g4xx_hal.h"
#include <Definitions.h>

#define ADC_BUFFER_SIZE 3

class Converter {
public:
	Converter(
			ADC_HandleTypeDef* adc1Handle,
			TIM_HandleTypeDef* tim3Handle,
			TIM_HandleTypeDef* tim8Handle
			);
	virtual ~Converter();

	// Functions
	void adcComplete(ADC_HandleTypeDef* hadc);
	void init();
	void setVoltageSetpoint(float reqVoltageSetp);
	void setCurrentSetpoint(float reqCurrentSetp);

	float getVoltageSetpoint();
	float getCurrentSetpoint();


private:
	// Handles
	ADC_HandleTypeDef* _adc1;
	TIM_HandleTypeDef* _tim3;
	TIM_HandleTypeDef* _tim8;

	// Functions
	void setPwmDuty(uint8_t duty);
	void setPwmFrequency(uint16_t frequency);
	void initPwm();
	void initAdc();
	void boostControlLoop();

	// Variables
	uint32_t adc1Buf[3];						// Buffer for adc1
	uint32_t vBatAdc = 0;						// Battery voltage
	uint32_t iLAdc = 0;							// Measured inductor current
	uint32_t vOutAdc = 0;						// Boost output voltage
	float vBatVolt = 0.0;
	float iLampere = 0.0;
	float vOutVolt = 0.0;

	// PID constants
	const uint8_t time_divisor_vC = 100;		// Factor that vC loop is slower compared to iL loop
	const float P_vC = 0.1;
	const float I_vC = 40.0;
//	const float D_vC = 0;
	const float P_iL = 0.05;
	const float I_iL = 10.0;
//	const float D_iL = 0;

	// PID variables
	uint8_t vC_counter = time_divisor_vC;
	float vC_setpoint = 0.0;					// PID setpoint vC
	float vC_error = 0.0;						// PID error vC
//	float vC_prev_error = 0.0;					// PID previous error vC, needed for D action
	float vC_int = 0.0;							// PID integrator vC, needed for I action
	float vC_out = 0.0;							// PID output vC
	float iL_setpoint = 0.0;					// PID setpoint iL
	float iL_error = 0.0;						// PID error iL
//	float iL_prev_error = 0.0;					// previous error value iL, needed for D action
	float iL_int = 0.0;							// PID integrator iL, needed for I action
	float iL_out = 0.0;							// PID output iL

	uint32_t iL_Fs = 100000;					// Sample frequency current loop
	uint32_t vC_Fs = iL_Fs / time_divisor_vC;	// Sample frequency voltage loop
	float iL_Ts = 1/iL_Fs;						// Sample time current loop
	float vC_Ts = 1/vC_Fs;						// Sample time voltage loop

	// Control loop setpoints
	float voltageSetpoint = 0.0;
	float currentSetpoint = 0.0;	// TODO TBD needed?


};

#endif /* CONVERTER_H_ */
