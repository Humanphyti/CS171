//
//  main.cpp
//  consecutive four equal numbers
//
//  Created by Eben Schumann on 5/2/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
using namespace std;

// prototyping
bool isConsecutiveFour(int values[], int size);
void sort(int values[], int size);

int main(int argc, const char * argv[]) {
    int values[80];
    int size = 0;
    cout << "How many numbers are in your list: ";
    cin >> size;
    cout << "What are your numbers: ";
    for (int i = 0; i < size; i++){
        cin >> values[i];
    }
    //sort(values, size);
    isConsecutiveFour(values, size);
    
}

bool isConsecutiveFour(int values[], int size){
    int t, f;
    while (t < 4){
    for (int i = 0; i < size; i++)
        if (values[i] / values[i-1] == 1){
            t++;
        } else{
            f++;
        }
    }
    if (t >= 4){
        return true;
    } else {
        return false;
    }
    
    
    
    
    
    
    
    
}