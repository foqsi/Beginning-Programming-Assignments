#include <iostream>
using namespace std;

int main(){
    int firstArray[] = { 0, 1, 2, 3, 4, 5};
    const int firstArray_SIZE = 6;
    double average;
    double total = 0;
/*
    for(int count = 0; count < firstArray_SIZE; count++)
        total += firstArray[count];
    average = total / firstArray_SIZE;
    cout << average;
*/
    //ranged-base for loop
    for(int val : firstArray)
        total += val;
    average = total / firstArray_SIZE;

    cout << average;
}