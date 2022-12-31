#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void countMessage()
{
    cout << "This is the count message for the for loop\n";
}
void deepMessage()
{
    cout << "This is the deep message\n";
}
void displayMessage() //header
{
    cout << "Hello from void function\n";
    deepMessage();
    cout << "Back in void function\n";
}
void displayValue(int i)
{
    cout << "The value is " << i << endl;
}

int main()
{
    cout << "Hello from main\n";
    displayMessage(); //call  
    cout << "Hello from main again\n";
    cout << "We can also do something like this---\n";
    int i;
    for (i = 0; i <= 5; i++)
    {
        cout << i << ". "; 
        countMessage();
    }

    displayValue(i);
}

