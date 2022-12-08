#include <iostream>
using namespace std;
int main() 
{
    char ch;

    cout << "Pause, press enter";
    cin.get(ch);
    cout << "Pause 2, press enter";
    ch = cin.get();
    cout << "Pause 3, press enter";
    cin.get();
    cout << "Thanks\n";

    int number;
    cout << "Enter a number: ";
    cin >> number;
    cin.ignore();           //skip new line character
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank you again!\n";
    return 0;
}