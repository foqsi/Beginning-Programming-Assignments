//This program uses strcmp to compare the strings entered by the user with the valid MP3 player part numbers
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(){
    //Price of parts
    const double A_PRICE = 99.0;
    const double B_PRICE = 199.0;

    //character array for part number
    const int PART_LENGTH = 9;
    char partNum[PART_LENGTH];

    //instruct the user to enter a part number
    cout << "The MP3 player part numbers are:\n" <<
            "\t16GB, part number S147-29A\n" <<
            "\t32GB, part number S147-29B\n" <<
            "Enter the part number of MP3 player you would like to purchase: ";

    //read a part number of at most 8 characters
    cin >> partNum;

    //determine what user entered using strcmp and print its price
    cout << showpoint << fixed << setprecision(2);
    if(!strcmp(partNum, "S147-29A"))
        cout << "The price is $" << A_PRICE << endl;
    else if(!strcmp(partNum, "S147-29B"))
        cout << "The price is $" << B_PRICE << endl;
    else
        cout << partNum << " is not a valid part number.\n";
}