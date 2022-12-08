#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int NUM = 43;
    double grades[NUM];
    double numbers, currentTotal, totalScore = 686, average;

    ifstream inputFile;
    inputFile.open("grades.txt");

    if(!inputFile){
        cout << "Unable to open file.";
    } else {
        for (int i = 0; i < NUM; i++){
            inputFile >> grades[i];
        }
    }
    inputFile.close();

    for(int i = 0; i < NUM; i++){
        cout << "Assignment " << i + 1 << ": " << grades[i] << endl;
        currentTotal += grades[i];
    }
    cout << endl << currentTotal;



}

