#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    int value1, value2, value3, sum;

    //Open the file
    inFile.open("C:\\Users\\DerWo\\Desktop\\numbers.txt");

    //Read the three numbers from file
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;

    //Close file
    inFile.close();

    //Calculate the sum of the numbers
    sum = value1 + value2 + value3;

    //Display the three numbers
    cout << "Here are the numbers:\n"
        << value1 << " " << value2 << " " << value3 << endl;

    //Display sum of numbers
    cout << "Their sum is: " << sum << endl;
    return 0;
}