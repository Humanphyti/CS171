/////////////////////////
// Program Name: Financial Application (gratuity)
// Name: Eben Schumann
// Date: 2/15/2016
// Class and Section: CS 171 SEC 3
/////////////////////////
// Declare variables
double subtotal;
double percent;

#include <iostream>
using namespace std;

int main() {
	// request subtotal from the user
	cout << "What doth be thine subtotal?" << endl;
	cin >> subtotal;
	// request gratuity percentage from user
	cout << "What doth be thine desired percentage of gratuity?" << endl;
	cin >> percent;
	// calculate gratuity value
	double amount = subtotal * (percent / 100);
	cout << "This doth be your gratuity value: " << amount << "." << endl;
	// calculate the grand total
	double grand = subtotal + amount;
	cout << grand << " doth be the amount owed on thine bill." << endl;
	// for some reason it closes without allowing anytime for the user to read what is completed by the program
	// this cin exists to keep the console window open
					//#Thank you for commenting this! :)
	cin >> subtotal;

					//#Remember to include return 0;
}