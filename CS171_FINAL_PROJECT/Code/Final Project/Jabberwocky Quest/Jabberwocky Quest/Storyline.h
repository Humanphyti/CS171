#ifndef STORYLINE_H
#define STORYLINE_H
#include "Console Delay.h"
#include <string>
#include <iostream>
using namespace std;

// A function that prints the next bit of storyline onto the screen and advances the position variable that will make sure the correct portion of the storyline is displayed.
// Pre-Conditions:  None
// Post-Conditions: The position variable is incremented and the current storyline is displayed to the screen.
void advanceStoryline();

// Initializes all of the text.
void initializeStoryline();

#endif