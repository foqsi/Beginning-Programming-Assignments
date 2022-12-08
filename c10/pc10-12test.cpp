#include <iostream>

#include <string>

using namespace std;

int main()

{

    string pass;

    cout << "Enter your password: ";
    getline(cin, pass);

    int i, l, up, low, dig;

    /*These are flag variables*/
    up = low = dig = 0;

    /*Initially all are set to 0 i.e false*/
    l = pass.length();

    for (i = 0; i < l; i++){
        /*Digit condition*/
        if (pass[i] >= '0' && pass[i] <= '9')
            dig = 1;
        else
            /*Uppercase condition*/
            if (pass[i] >= 'A' && pass[i] <= 'Z')
                up = 1;
            else
                /*Lowercase condition*/
                if (pass[i] >= 'a' && pass[i] <= 'z')
                    low = 1;
    }
    /*4 conditions to form the password*/
    if (l >= 6 && dig == 1 && up == 1 && low == 1){
        cout << endl;
        cout << "Your password meets the stated criteria.\n";
    }else{
        cout << endl;
        cout << "Sorry! Your password doesn't meet the following criteria..." << endl;
        if (l < 6)
            cout << "Your password contains less than 6 characters.\n";
        if (up != 1)
            cout << "Your password does not contain uppercase letters.\n";
        if (dig != 1)
            cout << "Your password does not contain any digits.\n";
        if (low != 1)
            cout << "Your password does not contain any lowercase letters.\n";
    }
    system("PAUSE");
}