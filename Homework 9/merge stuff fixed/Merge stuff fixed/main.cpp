//
//  main.cpp
//  Merge stuff
//
//  Created by Eben Schumann on 5/6/16.
//  Copyright © 2016 Eben Schumann. All rights reserved.
//

#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);


int main(int argc, const char * argv[]) {
    int list1 [80], list2[80];
    int size1, size2;
    
    int list3[160];
    
    cout << "How many numbers are in your first list of numbers: ";
    cin >> size1;
    cout << "How many numbers are in your second list of numbers: ";
    cin >> size2;
    
    cout << "What are the numbers in your first list: ";
    for (int i = 0; i < size1; i++){
        cin >> list1[i];
    }
    cout << "What are the numbers in your second list: ";
    for (int i = 0; i < size2; i++){
        cin >> list2[i];
    }
    
    
    merge(list1, size1, list2, size2, list3);
    
    return 0;
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k] = list1[i];
            i++;
        } else {
            list3[k] = list2[j];
            j++;
        }
        k++;
    }
    if (i < size1) {
        for (int p = i; p < size1; p++) {
            list3[k] = list1[p];
            k++;
        }
    } else {
        for (int p = j; p < size2; p++) {
            list3[k] = list2[p];
            k++;
        }
        cout << "Your sorted array looks like this:" << endl;
        for (int i = 0; i < (size1 + size2); i++)
        {
            cout << list3[i] << " ";
        }
    }
    
}