/*
Download the "Big List of Random Integers" file. Then write a program that makes use of the isPrime function you've already written that scans a file of integers and determines the i of primes found within.

Our function isn't really very efficient, but this program will still run in just a couple of seconds.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isPrime(int);

int main(){
    fstream inputFile;
    int number, count = 0;

    //open file
    inputFile.open("RandomIntegers.txt");
    //if file doesn't open
    if(!inputFile){
        cout << "Error: Unable to locate file";
    }
    if(inputFile){
        while(inputFile >> number){
            if(isPrime(number)){
                count++;
            }
        }
        cout << count;
    }
}
bool isPrime(int number){
    bool result = 1;
    for(int i = 2; i < number; ++i){
        if(number % i == 0){
            result = 0;
            break;
        }
    }
    return result;
}