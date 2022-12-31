
/*
Extra Credit assignment

General Crates, Inc. builds custom-designed wooden crates. With materials and labor, it costs CGI $0.23 per cubic foot to build a crate. In turn, they charge their customers $0.50 per cubic foot for the crate. You have been asked to write a program that calculates the volume (in cubic feet), cost, customer price, and profit of any crate CGI builds.

//
Make sure you use const to define your constants.

You will provide two tables as output for this program.

The first table will echo length, width, and height, and will also show the volume. The values are to have three digits after the decimal, and be lined up by the decimal point in their table.

The second table will show money - our cost, our selling price, and our profit. These values are also aligned by the decimal point, and will have two digits after the decimal point (as is customary for currency).


length 3.5

width 5.1

height 6.25

calculate the volume, cost, customer price, and profit
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main() 
{
    double length, width, height, volume, cost, charge, profit, profit_per;
    const double COST_PER_CUBIC_FOOT = 0.23, CHARGE_PER_CUBIC_FOOT = 0.5;

    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the height: ";
    cin >> height;

    //calculations
    volume = length * width * height;
    profit_per = CHARGE_PER_CUBIC_FOOT - COST_PER_CUBIC_FOOT;
    cost = COST_PER_CUBIC_FOOT * volume;
    charge = CHARGE_PER_CUBIC_FOOT * volume; 
    profit = charge - cost;

    //table 1
    cout << "---Crate dimensions---" << endl;
    cout << setprecision(3) << fixed;
    cout << "Length:" << setw(15) << length << endl 
    << "Width:" << setw(16) << width << endl
    << "Height:" << setw(15) << height << endl
    << "Volume:" << setw(15) << volume << endl << endl << endl;

    //table 2
    cout << "--------Revenue-------" << endl;
    cout << setprecision(2) << fixed;
    cout << "Cost:" << setw(17) << cost << endl;
    cout << "Price:" << setw(16) << charge << endl;
    cout << "Profit:" << setw(15) << profit;

    return 0;
}