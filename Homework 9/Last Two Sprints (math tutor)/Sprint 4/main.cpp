//
//  main.cpp
//  Sprint 4
//
//  Created by Eben Schumann on 3/18/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//
#include <iostream> //Header Declaration
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
signed int ans1; // declare ans1
int choice; // variable choice
string name;
void mainmenu(); // Main menu
void addition(int); // addition function
void subtraction(int); // subtraction function
void multiplication(int); // multiplication function
void division(int); // division function
bool start = true; // start
double tries[4] = {0, 0, 0, 0};
double correct[4] = {0, 0, 0, 0};
double percent[4] = {0, 0, 0, 0};
int main(){
	// output the title of the program
	cout << "Hello! I am your electronic, computer based, mathematics tutor!\n" << endl;
	// user input preferred name
	cout << "How do you want me to address you? Name: " << endl;
	getline(cin, name);
	// output the description of the Program
	cout << "The sole purpose of my existenece is to help you learn this wonderful thing called mathematics of the basic variety.\n" << endl;
	// Output what the discipline and subjects covered
	cout << "By the end of my use I hope that you will be able to feel confident in " << endl;
	cout << "multiplication, division, addition, subtraction, and order of operations involving some " << endl;
	cout << "or all of the previously mentioned operations, which has the potential to include the Quadratic Formula." << endl;
    mainmenu();
    return 0;
}

void addition() // perform addition.
{
    int a = 0;
    do {
        srand(static_cast<int>(time(NULL)));
        int random1 = rand() % 100;
        int random2 = rand() % 100;
        cout << "What is " << random1 << " + " << random2 << " = ?" << endl;
        cin >> ans1;
        cout << "You answered that " << random1 << " + " << random2 << " is equal to: " << ans1 << endl;
        if(ans1 == (random1 + random2)){
        cout << "Congratulations..You are Correct" << endl;
            a++;
            tries[0]++;
            correct[0]++;
        }
        else{
            cout << "Incorrect... Please try this similar problem." << endl;
        tries[0]++;
        }
    } while (a < 10);
    percent[0] = correct[0] / tries[0];
    cout << "For addition the percent you got correct was " << percent[0] << "%" << endl;
    
    mainmenu();
}

void subtraction() //do subraction function.
{
    int s = 0;
    do {
        srand(static_cast<int>(time(NULL)));
        int random1 = rand() % 100;
        int random2 = rand() % 100;
        cout << "What is " << random1 << " - " << random2 << " = ?" << endl;
        cin >> ans1;
        cout << "You answered that " << random1 << " - " << random2 << " is equal to: " << ans1 << endl;
		if (ans1 == (random1 + random2)) {
			cout << "Congratulations..You are Correct" << endl;
			a++;
			tries[1]++;
			correct[1]++;
		}
		else {
			cout << "Incorrect... Please try this similar problem." << endl;
			tries[1]++;
		}
	} while (a < 10);
	percent[1] = correct[1] / tries[1];
	cout << "For addition the percent you got correct was " << percent[0] << "%" << endl;
    
    mainmenu();
}

void multiplication() //do multiplication function.
{
    int m = 0;
    do {
        srand(static_cast<int>(time(NULL)));
        int random1 = rand() % 100;
        int random2 = rand() % 100;
        cout << "What is " << random1 << " * " << random2 << " = ?" << endl;
        cin >> ans1;
        cout << "You answered that " << random1 << " * " << random2 << " is equal to: " << ans1 << endl;
		if (ans1 == (random1 + random2)) {
			cout << "Congratulations..You are Correct" << endl;
			a++;
			tries[2]++;
			correct[2]++;
		}
		else {
			cout << "Incorrect... Please try this similar problem." << endl;
			tries[2]++;
		}
	} while (a < 10);
	percent[2] = correct[2] / tries[2];
	cout << "For addition the percent you got correct was " << percent[0] << "%" << endl;
    
    mainmenu();
}

void division() // do division function.

{
    int d = 0;
    do {
        srand(static_cast<int>(time(NULL)));
        int random1 = rand() % 100;
        int random2 = rand() % 100;
        cout << "What is " << random1 << " / " << random2 << " = ?" << endl;
        cin >> ans1;
        cout << "You answered that " << random1 << " / " << random2 << " is equal to: " << ans1 << endl;
		if (ans1 == (random1 + random2)) {
			cout << "Congratulations..You are Correct" << endl;
			a++;
			tries[3]++;
			correct[3]++;
		}
		else {
			cout << "Incorrect... Please try this similar problem." << endl;
			tries[3]++;
		}
	} while (a < 10);
	percent[3] = correct[3] / tries[3];
	cout << "For addition the percent you got correct was " << percent[0] << "%" << endl;
    
    mainmenu();
}

void mainmenu()
{
    cout << endl;
    cout << "*** Main Menu ***" << endl;
    cout << endl;
    cout << "Please choose from the following, press [5] to quit: " << endl; //main option
    cout << endl;
    /*main menu options */
    cout << " Press [1] for Addition" << endl;
    cout << " Press [2] for Subtraction" << endl;
    cout << " Press [3] for Multiplication" << endl;
    cout << " Press [4] for Division" << endl;
    cout << endl;
    cin >> choice; //ask user to enter selection, places it in int choice
    switch (choice)
    
    {
        case 1: addition();
            break;
        case 2: subtraction();
            break;
        case 3: multiplication();
            break;
        case 4: division();
            break;
        case 5:
            (start = false);
            cout<<"Exiting..."<<endl<<endl;
            break;
        default:
            cout << " INVALID ENTER, Try again..." << endl << endl;
            cin.clear();
            cin.sync();
            mainmenu();
    }
}
