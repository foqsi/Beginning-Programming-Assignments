#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isPrime(int);

int main(){
    ifstream inputFile;
    ofstream outputFile;
    double x;
    int total = 0;
    string filename;

    inputFile.open("RandomIntegers.txt");
    cout << "Filename: ";
    getline(cin, filename);
    outputFile.open(filename);
    if(inputFile){
        inputFile >> x;
        for(int i = 0; i < x; i++){
            if (isPrime(i)){
                outputFile << i << endl;
                total++;
            }
        }
        outputFile << "Total is -----" << total;
    }
    return 0;
}
bool isPrime(int i){
    if (i <= 1) return false;
    for (int j = 2; j < i; j++){
        if (i % j == 0){
            return false;
        }
    }
    return true;
}