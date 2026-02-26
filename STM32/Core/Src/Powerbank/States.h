#ifndef STATES_H
#define STATES_H

// Define the statemachine states
enum class State {
    INIT,		// Initialize
	STDBY,		// Standby
	OUTPUT,		// Output power to device
	CHARGE,		// Charge battery
    ERROR		// Error, something is wrong, power off and on is only way out
};


#endif
