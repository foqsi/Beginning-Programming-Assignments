#include <iostream>

#include <fstream>

using namespace std;

// returns true if given string has uppercase letter

bool has_uppercase(string temp)

{

    for (int i = 0; i < temp.length(); i++)

    {

        if (temp[i] >= 'A' && temp[i] <= 'Z')

            return true;
    }

    return false;
}

// returns true if given string has lowercase letter

bool has_lowercase(string temp)

{

    for (int i = 0; i < temp.length(); i++)

    {

        if (temp[i] >= 'a' && temp[i] <= 'z')

            return true;
    }

    return false;
}

// returns true if given string has digit

bool has_digit(string temp)

{

    for (int i = 0; i < temp.length(); i++)

    {

        if (temp[i] >= '0' && temp[i] <= '9')

            return true;
    }

    return false;
}

bool is_special(char c)

{

    string special = " !\" #$ % &'()*+,-./:;<=>?@[\\]^_`{|}~";

    for (int i = 0; i < special.size(); i++)

        if (special[i] == c)

            return true;

    return false;
}

// returns true if given string has special character

bool has_special(string temp)

{

    for (int i = 0; i < temp.length(); i++)

    {

        // special character range 33-47

        if (is_special(temp[i]))

            return true;
    }

    return false;
}

// returns true if given string has space

bool has_spaces(string temp)

{

    for (int i = 0; i < temp.length(); i++)

    {

        if (temp[i] == ' ')

            return true;
    }

    return false;
}

bool isValid(string password)

{

    // Minimum length of twelve characters

    if (password.length() < 12)

        return false;

    // At least one UPPER CASE letter (A-Z)

    if (!has_uppercase(password))

        return false;

    // At least one lower case letter (a-z)

    if (!has_lowercase(password))

        return false;

    // At least one digit (0-9)

    if (!has_digit(password))

        return false;

    // At least one "special" character (printable, but not alphanumeric)

    if (!has_special(password))

        return false;

    // NO SPACES

    if (has_spaces(password))

        return false;

    // if all above conditions satisfy then password is valid

    return true;
}

int main()

{

    ifstream input("listofpw.txt");

    string password;

    // number of valid passwords

    int valid = 0;

    int n = 0;

    // read all passwords till last line

    while (getline(input, password)){

        n++;

        if (isValid(password))

            valid++;
    }

    input.close();

    cout << "Number of valid passwords: " << valid << endl;

    cout << "Number of invalid passwords: " << n - valid << endl;
}