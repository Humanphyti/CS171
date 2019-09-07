//
//  main.cpp
//  Find the sales amount
//
//  Created by Eben Schumann on 4/20/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int salary = 5000;
    int sales = 5000;
    int salesTotal = 15000;
    int temp;
    salary = salary + ((sales * 0.08)+ (sales * 0.10));
    cout << "You've sold $" << salesTotal << " of things" << endl;
    cout << "This is your current salary: " << salary << endl;
    
    do {
        temp = salary + (++salesTotal * 0.12);
    } while (temp <= 30000);
    cout << "In order to make $30000, you would need to sell $" << salesTotal << endl;
    cout << "worth of things." << endl;
    return 0;
}
