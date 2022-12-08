//This program demonstrates the showValues function being used to display the contents of two arrays
#include <iostream>
using namespace std;

void showValues(int[], int); //function prototype

int main(){
    const int SIZE1 = 8; //size of set1 array
    const int SIZE2 = 5; //size of set2 array
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[SIZE2] = {2, 4, 6, 8, 10};

    //pass set1 to showValues
    showValues(set1, SIZE1);
    //pass set2 to showValues
    showValues(set2, SIZE2);

    return 0;
}
//Definition of showValues
//This function accepts an array of integers and the array's size as its arguments. The content of the array are displayed.
void showValues(int nums[], int size){
    for (int index = 0; index < size; index++){
        cout << nums[index] << " ";
    }
    cout << endl;
}