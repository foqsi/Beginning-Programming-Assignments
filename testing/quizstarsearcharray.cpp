#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){

    cout << fixed << setprecision(2);
    const int NUM = 10;
    int theScores[NUM];
    int count = 0, i;
    double currentLine, highest, lowest, sum, average,
            value1, value2;

    ifstream inputFile;
    inputFile.open("sstest.txt");
    if(inputFile.is_open()){
        while(!inputFile.eof()){
            for(int i = 0; i < NUM; i++){
                inputFile >> theScores[i];
                count++;
            }
        }
    }

    //count -= 2;
    sum -= lowest + highest;
    average = sum / count;
    cout << endl << "Lowest: " << lowest << "\t\tHighest: " << highest;
    cout << endl << "Sum: " << sum << "\t\tCount: " << count;
    cout << endl << "Average: " << average;
    cout << endl << "Value 1: " << value1 << "\t\tValue 2: " << value2;

    inputFile.close();
    cout << endl << endl;
    cout << "File closed." << endl << endl;
}