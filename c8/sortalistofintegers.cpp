#include <iostream>
#include <fstream>
using namespace std;

void bubbleSort(int[], int);
void selectionSort(int [], int);
void swap(int &, int &);
int binarySearch(const int[], int, int);

int main(){
    ifstream input;
    ofstream output;
    int NUM = 100000;
    int number[NUM];
    int result, indexNumber;

    input.open("listofintegers.txt");
    if(!input)
        cout << "Unable to open test file.";
    else if(input){
        cout << "Unsorted numbers: " << endl;
        for(int i = 0; i < NUM; i++){
            input >> number[i];
        }
    }
    output.open("output.txt");
    selectionSort(number, NUM);
    cout << "Enter an index number: ";
    cin >> indexNumber;
    cout << "Index number is " << number[indexNumber];
    output << number[indexNumber];
}
void bubbleSort(int number[], int NUM){
    int maxElement;
    int index;
    for(maxElement = NUM - 1; maxElement > 0; maxElement--){
        for(index = 0; index < maxElement; index++){
            if(number[index] > number[index + 1]){
                swap(number[index], number[index + 1]);
            }
        }
    }
}
void selectionSort(int number[], int NUM){
    int minIndex, minValue;
    for (int start = 0; start < (NUM - 1); start++){
        minIndex = start;
        minValue = number[start];
        for(int index = start + 1; index < NUM; index++){
            if(number[index] < minValue){
                minValue = number[index];
                minIndex = index;
            }
        }
        swap(number[minIndex], number[start]);
    }
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int binarySearch(const int number[], int NUM, int value){
    int first = 0,
        last = NUM - 1,
        middle,
        position = -1;
    bool found = false;
    while(!found && first <= last){
        middle = (first + last) / 2;
        if(number[middle] == value){
            found = true;
            position = middle;
        }
        else if(number[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}