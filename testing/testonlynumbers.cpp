#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string line;
    double d;

    //get num
    cout << "Input: ";
    while (getline(cin, line))
    {
        stringstream ss(line);
        if (ss >> d)
        {
            if (ss.eof())
            {   // Success
                break;
            }
        }
        cout << "Error! Try again: " << endl;
    }
    cout << "Finally: " << d << endl;
}