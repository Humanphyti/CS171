#include "Console Delay.h"

// Delays action from the console for a set number of seconds.
// Pre-Conditions:  Provide how many seconds the console should pause for.
// Post-Conditions: The program has waited the given amount of time.
void delayConsole(double time) {

	// Initialize variables to help keep track of how much time has elapsed.
	int startTime = clock();
	double timeElapsed = 0;

	// Delay the end of the function until time elapsed exceeds the time threshold.
	while (timeElapsed < time) {
		timeElapsed = static_cast<double>(clock() - startTime) / static_cast<double>(CLOCKS_PER_SEC);
	}

}