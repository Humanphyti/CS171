//
//  main.cpp
//  Pyramid of numbers
//
//  Created by Eben Schumann on 4/20/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

//preprocessor stuffs
#include <iostream>
using namespace std;

//prototype
void patternA (int, int);
void patternB (int, int);
void patternC (int, int);
void patternD (int, int);

//Universal variable, I know Bad Eben but it saved made for efficient printing of 4 patterns with the same number of rows
int rows = 0;

int main() {
    
    //prompt users to enter the number
    cout << "Enter the number of rows: ";
    //user enter number
    cin >> rows;
    cout << "\n";
    //function call
    patternA(0, 0);
    patternB(0, 0);
    patternC(0, 0);
    patternD(0, 0);
    
    return 0;
}

//functions galore!!
void patternA(int i = 0, int j = 0) {
    
    //name of pattern from book
    cout << "Pattern A" << endl;
    //first loop to make rows
    for(i=1;i<=rows;++i)
    {   //loop-ception to fill rows with those numbery things
        for(j=1;j<=i;++j){
            cout << j << " ";
        }
        //start a new one of those liney things
            cout << "\n";
    }
    //give extra liney thing between patterns
    cout << "\n";
}

void patternB(int i = 0, int j = 0 ) {
    
    //name of pattern from book
    cout << "Pattern B" << endl;
    //first loop to make rows
    for(i = rows; i >= 1; --i){
        //loop-ception to fill rows with those numbery things
        for(j = 1; j <= i; ++j){
            cout << j << " ";
        }
        //start a new one of those liney things
        cout << "\n";
    }
    //give extra liney thing between patterns
    cout << "\n";
}

void patternC(int i = 0, int j = 0) {
    
    //name of pattern from book
    cout << "Pattern C" << endl;
    //first loop to make rows
    for(i = 1; i <= rows; ++i){
        //loop-ception to fill rows with those numbery things
        for(j = rows; j >= i; --j){
            cout << j << " ";
        }
        //start a new one of those liney things
        cout << "\n";
    }
    //give extra liney thing between patterns
    cout << "\n";
}

void patternD(int i = 0, int j = 0) {
    
    //name of pattern from book
    cout << "Pattern D" << endl;
    //first loop to make rows
    for(i = rows; i >= 1; --i){
        //loop-ception to fill rows with those numbery things
        for(j = 1; j <= i; ++j){
            cout << j << " ";
        }
        //start a new one of those liney things
        cout << "\n";
    }
    //give extra liney thing between patterns
    cout << "\n";
}



