#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    string name;

    inputFile.open("C:\\Users\\DerWo\\Desktop\\Friends.txt");
    cout << "Reading data from file.\n";

    if (!inputFile)
        cout << "Cannot open file.\n";

    inputFile >> name;
    cout << name << endl;

    inputFile >> name;
    cout << name << endl;

    inputFile >> name;
    cout << name << endl;

    inputFile >> name;
    cout << name << endl;

    inputFile.close();
    return 0;
}