//
//  main.cpp
//  qsortTest
//
//  Created by vivitanjing on 15-1-8.
//  Copyright (c) 2015年 vivitanjing. All rights reserved.
//

#include <iostream>
using namespace std;

//qsort
int compareFuc(const void* voidA, const void* voidB)
{
    int* A = (int*)voidA;
    int* B = (int*)voidB;
    return *A - *B;
}

// insertion sort
void insertSort(int intArray[], int arraySize)
{
    int start = 0;
    for (int i=start+1; i<arraySize; i++) {
        for (int j=i; j>start&&(intArray[j-1]>intArray[j]); j--) {
            int temp = intArray[j];
            intArray[j] = intArray[j-1];
            intArray[j-1] =temp;
        }
    }
}

// bubble sort
void bubbleSort(int intArray[], int arraySize)
{
    for(int j=0; j<arraySize; j++)
    {
        for(int i=0; i<arraySize-j; i++)
        {
            if (intArray[i] > intArray[i+1] && (i+1) < arraySize) {
                int temp = intArray[i+1];
                intArray[i+1] = intArray[i];
                intArray[i] = temp;
            }
        }
    }
   
}
int main(int argc, const char * argv[]) {
    const int ARRAY_SIZE = 5;
    int intArray[ARRAY_SIZE] = {5,7,3,2,1};
    /*
    # qsort example
    qsort(intArray, ARRAY_SIZE, sizeof(int), compareFuc);
    */
    
    //insertSort(intArray, ARRAY_SIZE);
    
    // bubble sort
    bubbleSort(intArray, ARRAY_SIZE);
    for (int i=0; i<ARRAY_SIZE; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;
    return 0;
}
