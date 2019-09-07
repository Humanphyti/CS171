//
//  main.cpp
//  Phone letter to phone number
//
//  Created by Eben Schumann on 4/7/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    char letterKey;
    cout << "What letter would you like to know the corresponding key to: ";
    cin >> letterKey;
    if (islower(letterKey)) {
        letterKey = toupper(letterKey);
    }
    if(letterKey > 65 && letterKey < 91){
        if (letterKey < 68) {
            cout << "the number forresponding to " << letterKey << " is 2" << endl;
        } else if (letterKey <= 70 && letterKey >= 68){
            cout << "the number corresponding to " << letterKey << " is 3" << endl;
        } else if (letterKey <= 73 && letterKey >= 71){
            cout << "the number forresponding to " << letterKey << " is 4" << endl;
        } else if (letterKey <= 76 && letterKey >= 74){
            cout << "the number corresponding to " << letterKey << " is 5" << endl;
        } else if (letterKey <= 79 && letterKey >= 77){
            cout << "the number corresponding to " << letterKey << " is 6" << endl;
        } else if (letterKey <= 83 && letterKey >= 80){
            cout << "the number corresponding to " << letterKey << " is 7" << endl;
        } else if (letterKey <= 86 && letterKey >= 84){
            cout << "the number corresponding to " << letterKey << " is 8" << endl;
        } else {
            cout << "the number corresponding to " << letterKey << " is 9" << endl;
        }
    }
    else {
        cout << "Not a valid input" << endl;
    }
}
