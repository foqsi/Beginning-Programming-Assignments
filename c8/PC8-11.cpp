//Edward Davis
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void sortNames(string[], int);

int main(){
    const int NUM_NAMES = 10;
    int i = 0;
    string names[NUM_NAMES];
    string fileName;
    ifstream inputFile;

    cout << "Please enter filename: ";
    cin >> fileName;
    inputFile.open(fileName);
    while(i < NUM_NAMES){
        getline(inputFile, names[i]);
        i++;
    }
    cout << "     Unsorted Names\n--------------------------" << endl;
    for(int index = 0; index < NUM_NAMES; index++){
        cout << right << setw(2) << index + 1 << " " << names[index] << endl;
    }
    sortNames(names, NUM_NAMES);

    cout << "\n      Sorted Names\n--------------------------" << endl;
    for(int index = 0; index < NUM_NAMES; index++){
        cout << right << setw(2) << index + 1 << " " << names[index] << endl;
    }
    return 0;
}
void sortNames(string names[], int size){
    int start;
    int minIndex;
    string minValue;
    for(start = 0; start < (size - 1); start++){
        minIndex = start;
        minValue = names[start];
        for(int index = start + 1; index < size; index++){
            if(names[index].compare(minValue) < 0){
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[start];
        names[start] = minValue;
    }
}