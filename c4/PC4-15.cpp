/*
The fast freight shipping company charges the following rates:
Weight of package in kg                         Rate per 500 miles shipped
2kg or less                                     $1.10
over 2kg but not more than 6kg                  $2.20
over 6kg but not more than 10kg                 $3.70
over 10kg but not more than 20kg                $4.80

Write a program that asks for the weight of the package and the distance it is to be shipped, then displays the charges.
Validation: Do not accept values of 0 or less for the weight of the package. Do not accept weights of more than 20kg (this is the maximum weight the company will ship). Do not accept distances of less than 10 miles or more than 3,000 miles. These are the company's minimum and maximum shipping distances.

/////Prof

We charge by the mile, so accept distances that are not multiples of 500 (e.g. 650 miles) and compute the fee accordingly (more than the cost for 500 miles, but less than for 1000). Fractions of miles are allowed so bring that input in as a double.

For your screen shot, enter a package weight of 12.5 kg to be shipped 1310.5 miles. As always for money, the shipping charge should show exactly two digits after the decimal point.
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double shippingRate, weight, distance = 0, costPerMile;

    cout << fixed << showpoint << setprecision(2);
    cout << "Weight of package? ";
    cin >> weight;
    weight < 0 ? weight = 0 : weight;
    if (weight > 20){
        cout << "Maximum weight is 20kg. Please enter a value less than 20kg.";
        return 0;
    }
    if (weight <= 2)
        shippingRate = 1.10;
    else if (weight > 2 && weight <= 6)
        shippingRate = 2.20;
    else if (weight > 6 && weight <= 10)
        shippingRate = 3.70;
    else if (weight > 10 && weight <= 20)
        shippingRate = 4.80;

    cout << "Distance to be shipped? ";
    cin >> distance;
    distance < 500 ? distance = 500 : distance;
    if (distance > 3000){
        cout << "Maximum distance is 3000 miles. Please enter a value less than 3000.";
        return 0;
    }
    costPerMile = distance / shippingRate;
    cout << "Cost per mile: " << costPerMile << endl;
    return 0;
}