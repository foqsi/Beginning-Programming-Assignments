//This program demonstrates that an array element is passed to a function like any other variable.
#include <iostream>
using namespace std;

void showValue(int); //function prototype
void showValue2(int nums[], int size);

int main(){
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    for (int index = 0; index < SIZE; index++){
        showValue(numbers[index]);//to pass just a variable
        showValue2(numbers, SIZE); //to pass an array
    }
    return 0;
}
void showValue(int num){
    cout << num << " ";
}



void showValue2(int nums[], int size){
    for (int index = 0; index < size; index++){
        cout << nums[index] << " ";
        cout << endl;
    }
}