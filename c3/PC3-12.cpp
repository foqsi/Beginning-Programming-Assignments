/*
Write a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is
F = 9/5C + 32
F is the Fahrenheit temp and C is the Celsius temp

Enter 37.0 degrees C / All floating-point values should be displayed with exactly two digits after decimal
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double f, c;

    cout << "What is the temperature in C? ";
    cin >> c;

    f = (c * 9) / 5 + 32;

    cout << setprecision(2) << fixed;
    cout << c << " degree celsius is " << f << " degrees fahrenheit!";

    return 0;
}