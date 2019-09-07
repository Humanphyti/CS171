//
//  main.cpp
//  largest value of n
//
//  Created by Eben Schumann on 4/20/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    //initialize the variables
    int n = 0;
    //loop to find the value where n exceeds 12000
    while (pow(n, 2) < 12000) {
        n++;
    }
    //subtract 1 from n because the current value of n
    //is one greater than the highest value n can be within the limits
    cout << (n -= 1) << endl;
    return 0;
}
