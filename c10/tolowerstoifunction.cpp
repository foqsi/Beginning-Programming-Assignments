//This program demonstrates the tolower and stoi functions
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string input;
    int total = 0;
    int count = 0;
    double average;

    cout << "This program will average a series of numbers.\n";
    cout << "Enter the first number or Q to quit: ";
    getline(cin, input);

    //Process the number and subsequent numbers
    while (tolower(input[0]) != 'q'){
        total += stoi(input);
        count++;
        //get next number
        cout << "Enter the next number or Q to quit: ";
        getline(cin, input);
    }

    //if any numbers were entered, display their average
    if(count != 0){
        average = static_cast<double>(total) / count;
        cout << "Average: " << average << endl;
    }
}