//
//  main.cpp
//  Miles to Kilometers
//
//  Created by Eben Schumann on 4/8/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    float miles = 0;
    float kilometers = 0;
    cout << "Miles" << setw(15) << "Kilometers" << endl;
    for (miles = 0; miles <= 10; miles++) {
        kilometers = (miles * 1.609);
        cout << miles << setw(14) << kilometers << endl;
    }
}
