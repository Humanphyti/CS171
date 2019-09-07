//
//  main.cpp
//  Letter grade to number
//
//  Created by Eben Schumann on 4/7/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    char grade;
    cout << "Please enter the grade you recieved on the Exam: ";
    cin >> grade;
    switch (toupper(grade)) {
        case 'A':
            cout << "The numeric value of " << grade << " is 4" << endl;
            break;
        case 'B':
            cout << "The numeric value of " << grade << " is 3" << endl;
            break;
        case 'C':
            cout << "The numeric value of " << grade << " is 2" << endl;
            break;
        case 'D':
            cout << "The numeric value of " << grade << " is 1" << endl;
            break;
        case 'F':
            cout << "The numeric value of " << grade << " is 0" << endl;
            break;
            
        default:
            cout << grade << " is an invalid grade" << endl;
            break;
    }
    return 0;
}
