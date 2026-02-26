/*
 * Definitions.h
 *
 *  Created on: Jan 31, 2026
 *      Author: Job
 */

#ifndef SRC_POWERBANK_DEFINITIONS_H_
#define SRC_POWERBANK_DEFINITIONS_H_

// Voltage divider values
#define VBAT_R1 5600
#define VBAT_R2 10000
#define CURR_R1 3300
#define CURR_R2 10000
#define VOUT_R1 5600
#define VOUT_R2 1000

#define VBAT_SCALE VBAT_R1/VBAT_R2
#define CURR_SCALE CURR_R1/CURR_R2
#define VOUT_SCALE VOUT_R1/VOUT_R2


#endif /* SRC_POWERBANK_DEFINITIONS_H_ */
