#include <iostream>
#include <string>
#include <fstream>
using namespace std;

bool isValidPassword(string password)
{

    // Minimum length of twelve characters
    if (password.length() < 12)
        return false;

    int uppers = 0, lowers = 0, digits = 0, spaces = 0, specials = 0;
    char ch;

    for (int i = 0; i < password.length(); i++)
    {
        ch = password[i];
        if ('a' <= ch && ch <= 'z')
            lowers++;
        else if ('A' <= ch && ch <= 'Z')
            uppers++;
        else if ('0' <= ch && ch <= '9')
            digits++;
        else if (ch == ' ')
            spaces++;
        // printable character has ascii value between 32 and 127
        else if (32 <= ch && ch <= 127)
            specials++;
    }
    if (spaces > 0 || uppers == 0 || lowers == 0 || digits == 0 || specials == 0)
        return false;

    return true;
}

int main()
{
    ifstream inputFile;
    inputFile.open("listofpw.txt");
    int validCount = 0;
    string password;

    if (inputFile)
        getline(inputFile, password, '\n');

    if (isValidPassword(password))
        validCount += 1;

    cout << "\n\nTotal # of valid passwords are " << validCount << "." << endl;

    return 0;
}