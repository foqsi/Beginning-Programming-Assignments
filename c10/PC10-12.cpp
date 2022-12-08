/*
Write a program that asks for a password then verifies that it meets the stated criteria. If it doesn't, the program should display a message telling the user why.

    Use the string data type. Do not use arrays of type char or any functions in the old "C String" libraries.

    12 characters
    No space characters
    One uppercase, one lowercase, one digit, one special character(non alphanumeric)

For your screen shot, begin with the password "lost frogs" (with a space), which will fail almost every test. Correct the password, one test at a time, until you end up with "Lost_Frogs99" for the final (and acceptable) password.
*/

#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

void verification(string &);

int main()
{
    string password;
    cout << "Please create a password: ";
    while (getline(cin, password))
        verification(password);
    return 0;
}
void verification(string &password)
{
    int pwLength, digit, upperCase, lowerCase, space, specChar;
    pwLength = digit = upperCase = lowerCase = space = specChar = 0;
    int pwLengthReq = 12;
    for (int i = 0; i <= password.length(); i++)
    {
        if (password.size() >= pwLengthReq)
            pwLength = 1;
        if (password[i] >= '0' && password[i] <= '9')
            digit = 1;
        if (password[i] >= 'A' && password[i] <= 'Z')
            upperCase = 1;
        if (password[i] >= 'a' && password[i] <= 'z')
            lowerCase = 1;
        if (ispunct(password[i]) && !isalnum(password[i]))
            specChar = 1;
        if (isspace(password[i]))
            space = 1;
    }
    if (pwLength == 1 &&
        digit == 1 &&
        upperCase == 1 &&
        lowerCase == 1 &&
        specChar == 1 &&
        space == 0)
    {
        cout << "Your password meets the requirements and has been set.\n";
        exit(0);
    }
    if (pwLength != 1 || digit != 1 || upperCase != 1 || lowerCase != 1 || specChar != 1 || space == 1)
    {
        cout << "Your password did not meet the following requirements...\n";
        if (pwLength != 1)
            cout << "Password must be at least 12 characters\n";
        if (digit != 1)
            cout << "Password must contain at least one number 0-9\n";
        if (upperCase != 1)
            cout << "Password must contain at least one uppercase character\n";
        if (lowerCase != 1)
            cout << "Password must contain at least one lowercase character\n";
        if (specChar != 1)
            cout << "Password must contain at least one special character\n";
        if (space == 1)
            cout << "Password must not contain a space\n";
        cout << "Try again: ";
    }
}