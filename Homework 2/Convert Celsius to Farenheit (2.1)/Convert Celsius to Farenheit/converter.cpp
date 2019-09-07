/////////////////////////
// Program Name: Temperature Converter
// Name: Eben Schumann
// Date: 2/15/2016
// Class and Section: CS 171 SEC 3
/////////////////////////

//State potential variables
float celsius, farenheit;

// Preprocessor actions
#include <iostream>
using namespace std;

// main code
int main()
{
	//user input of celsius
	cout << "Please input the current celsius measurement: ";
	//accept input from the user
	cin >> celsius;
	//equation to convert from celsius to farenheit
	farenheit = (9 / 5) * celsius + 32;
	// display the resutling equivlency in farenheit in a nicer way than a number
	cout << "The roughly equivalent temperature is " << farenheit << " degrees farenheit" << endl;

					//#Remember to include return 0;
}