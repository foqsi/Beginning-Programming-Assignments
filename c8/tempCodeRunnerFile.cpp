/*
Modify the program you wrote for PC6 so it reads in 20 strings from a file. The data can be found in the names.txt file.
PC6-
Modify the selelctionSort function presented in this chapter so it sorts an array of strings instead of an array of ints. Test the function with a driver program.

PROF----
Have the program prompt the user for the file name.

Display both the unsorted and sorted names, one name per line.

Note that the strings to be sorted might contain spaces!

Do not use a two-dimensional array of type char (as in the textbook example); that is a fairly outdated approach. Well, C is an old language so we get a lot of that even in the newer textbooks. Use an array of type string instead.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void sortNames(string[], const int);
void displayNames(string[], const int, string);
void swap(string &, string &);

int main(){
    const int NUM_NAMES = 50;
    string names[NUM_NAMES], filename;
    fstream inputFile;

    cout << "Please enter filename: ";
    cin >> filename;
    inputFile.open(filename);

    cout << "Unsorted Names: ";
    cout << "\n------------------------";
    if(inputFile){
        while(getline(inputFile, names[NUM_NAMES])){
            cout << names[NUM_NAMES] << endl;
        }
        sortNames(names, NUM_NAMES);
        displayNames(names, NUM_NAMES, "Sorted Names: \n-----------------");
    } else
        cout << "Unable to open file.";
    inputFile.close();
    cout << "\nFile closed.";
}
void sortNames(string names[], const int NUM_NAMES){
    int minIndex;
    string minValue;

    for(int start = 0; start < (NUM_NAMES - 1); start++){
        minIndex = start;
        minValue = names[start];
        for(int index = start + 1; index < NUM_NAMES; index++){
            if(names[index] < minValue){
                minValue = names[index];
                minIndex = index;
            }
        }
        swap(names[minIndex], names[start]);
    }
}
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}
void displayNames(string names[], const int NUM_NAMES, string prompt){
    cout << prompt << endl;
    for(int i = 0; i < NUM_NAMES; i++)
        cout << names[i] << endl;
    cout << endl;
}