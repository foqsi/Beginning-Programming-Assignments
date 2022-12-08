#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    int number1, number2, number3;

    //Open an output file.
    outputFile.open("C:\\Users\\DerWo\\Desktop\\outputfile.txt");

    //Get three numbers from the user
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter a second number: ";
    cin >> number2;
    cout << "Enter a third number: ";
    cin >> number3;

    //Write the numbers to the file.
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "The numbers were saved to a file.\n";

    //Close the file.
    outputFile.close();
    cout << "Done.\n";
    return 0;

}