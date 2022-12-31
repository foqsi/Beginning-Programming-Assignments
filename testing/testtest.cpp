#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isPrime(int);
int main(){
    fstream inFile;
    ofstream outFile;
    int number, count = 0;

    inFile.open("RandomIntegers.txt");
    outFile.open("test2");
    while(inFile >> number){
        if (number % 1 == 0){
            cout << number;
            outFile << number;
            count++;
        }
        outFile << "\t\t\t" << count << endl;
    }
        //cout << count << endl;
         //test file
    cout << "\t\t\t" << count << endl; //final count
}
bool isPrime(int number){
    int isPrime = 0;
    for (int i = 1; i <= number; i++){
        if (number % i == 0)
            isPrime++;
    }
    return isPrime == 2 ? 1 : 0;
}
