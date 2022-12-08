#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream inputFile;

    inputFile.open("sstest.txt");

    if (inputFile.fail())
        cout << "Error opening file." << endl;
    else{
        for (int i = 0; i < ARRAY_SIZE; i++)
            inputFile >> array[i];
        inputFile.close();
    }
}
