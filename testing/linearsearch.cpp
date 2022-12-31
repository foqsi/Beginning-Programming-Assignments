//This program demonstrates the linear search algorithm.
#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);

int main(){
    const int SIZE = 5;
    int tests[SIZE] = { 87, 75, 98, 100, 82 };
    int results;

    //search array for 100
    results = linearSearch(tests, SIZE, 100);

    //if linearSearch returned -1, then 100 was not found
    if(results == 01)
        cout << "You did not earn 100 points on any test\n";
    else{
        //otherwise results contains the subscript of the first 100 in the array
        cout << "You earned 100 points on test ";
        cout << (results + 1) << endl;
    }
    return 0;
}
int linearSearch(const int arr[], int size, int value){
    int index = 0;      //used as a subscript to search array
    int position = -1;  //used to record position of search value
    bool found = false; //flag to indicate if value was found

    while (index < size && !found){
        if (arr[index] == value){           //if the value is found
            found = true;                   //set the flag
            position = index;               //record value's subscript
        }
        index++;                            //go to next element
    }
    return position;                        //return position or -1
}