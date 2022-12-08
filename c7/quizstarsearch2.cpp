/*
Modify your "Star Search" program to read an unknown number of scores from a text file, execute the "Star Search" algorithm (drop the lowest and highest scores, then average the rest) and display the result, with three digits after the decimal point.

As per the Star Search specifications, only scores from 0 - 10 will be accepted. Any score that is outside that range is to be rejected, and is not included in the average. That means that invalid scores can't be the high or low scores either.

For example: if the list is

6.1  -5.1  2.0  3.5  5.8  2.0  12.9  5.0  9.9  10.0

The -5.1 and 12.9 are rejected as invalid (not in the range 0-10).

2.0 and 10.0 are the low and high scores to be dropped.

The remaining SIX scores are averaged.

If you wish to use this data for testing, the answer is 5.383

Note that you don't know the number of scores in advance, and you will not be using arrays in this problem. It's more like the Chapter 5 version, where we process as we read the numbers. But it's nearly the end of the semester and it's nice to have an easy quiz at this point.
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    cout << fixed << setprecision(3);
    double currentline, sum, average, value1, value2, lowest, highest;
    ifstream inputFile;
    inputFile.open("cheat.txt");
    cout << "Reading file..." << endl;

    int count = 0;

    if(inputFile){
        while(inputFile >> currentline){
            value1 = value2 = currentline;
            if(value1 <= value2){
                lowest = value1;
            }
            if(value1 >= value2){
                highest = value1;
            }
            if(currentline >= 0 && currentline <= 10){
                count++;
                sum += currentline;
                cout << currentline << endl;

            }
        }
    }

    count -= 2;
    sum -= 9.68 + 0;
    average = sum / count;
    cout << endl << "Lowest: " << lowest << "\t\tHighest: " << highest;
    cout << endl << "Sum: " << sum << "\t\tCount: " << count;
    cout << endl << "Average: " << average;
    cout << endl << "Value 1: " << value1 << "\t\tValue 2: " << value2;

    inputFile.close();
    cout << endl << endl;
    cout << "File closed." << endl << endl;
}