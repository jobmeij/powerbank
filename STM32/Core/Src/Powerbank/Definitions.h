/*
 * Definitions.h
 *
 *  Created on: Jan 31, 2026
 *      Author: Job
 */

#ifndef SRC_POWERBANK_DEFINITIONS_H_
#define SRC_POWERBANK_DEFINITIONS_H_

// Voltage divider values
#define VBAT_R1 47000	// 47k
#define VBAT_R2 100000	// 100k
#define VOUT_R1 100000 	// 100k
#define VOUT_R2 18000	// 18k

#define VBAT_SCALE VBAT_R1/VBAT_R2
#define CURR_SCALE CURR_R1/CURR_R2
#define VOUT_SCALE VOUT_R1/VOUT_R2

#define I_ADC_OFFSET 1985

#define APB2_CLOCK 170000000

#endif /* SRC_POWERBANK_DEFINITIONS_H_ */
