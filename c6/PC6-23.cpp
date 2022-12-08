/* Due 25
Use the isPrime function that you wrote in PC22 (isPrime function) is a program that stores a list of all the prime numbers 1 through 100 in a file.
PC22- A prime number is a number that is only evenly dvisible by itself and 1. Write a function name isPrime, which takes an integer as an argument and returns true if the argument is a prime number, or false otherwise. Demonstrate the function in a complete program.
----
PROF
Prompt the user for the range to be used as well as the desired output file name. The range entries can be in any order (just like that temperature table assignment from a few chapters back); start at the smaller and end at the larger. The output file should show one value per line.

Deliverables:
Program file (PC6-23.cpp), a screen shot using input values 100 and -5. This should produce a list from the primes between -5 and 100. Please provide a copy of the output file as well, as a .txt file.

*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

bool isPrime(int);

int main(){
    int value1, value2;
    string filename;
    cout << "What would you like to call the file? ";
    cin >> filename;

    ofstream outputFile;
    outputFile.open(filename);

    cout << "Enter first number: ";
    cin >> value1;
    cout << "Enter second number: ";
    cin >> value2;

    if (value1 > value2){
        int start = floor(value2);
        int end = ceil(value1);
        if (outputFile){
            for (start = start; start <= end; start++){
                if(isPrime(start)){
                    outputFile << start << endl;
                    //Uncomment the line below if you want output displayed in terminal
                    //cout << start << endl;
                }
            }
        } else{
            cout << "Error opening file.";
        }
    }
    if (value2 > value1){
        int start = floor(value1);
        int end = ceil(value2);
        if (outputFile){
            for (start = start; start <= end; start++){
                if(isPrime(start)){
                    outputFile << start << endl;
                    //Uncomment the line below if you want output displayed in terminal
                    //cout << start << endl;
                }
            }
        } else{
            cout << "Error opening file.";
        }
    }
}
bool isPrime(int number){
    int isPrime = 0;
    for (int i = 1; i <= number; i++){
        if (number % i == 0)
            isPrime++;
    }
    return isPrime == 2 ? 1 : 0;
}