/*
A software company sells a package that retails for $99. Quantity discounts are given according to the following table.

Write a program that asks for the number of units sold and computes the total cost of the purchase.
Input validation: Make sure the number of units is greater than 0.

Show the regular price, the discount (if any), and the discounted price in a vertical table, with all money values aligned by the decimal point and showing two digits after the decimal point. See the example below. 

Use input value 42 units sold for your screen shot.

Quantity                             discout
10-19                                20%
20-49                                30%                   
50-99                                40%
100 or more                          50%

EXAMPLE:
Please enter quantity: 10
Your discount is 20%
  
Regular Price:     990.00
Discount:          198.00
Total Price:       792.00
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double price = 99,
           discount = 0,
           quantity, total_price, discountDollar;

    cout << "Please enter quantity purchased: ";
    cin >> quantity;

    if (quantity > 0) {
        if (quantity >= 10 && quantity < 20)
            discount = .20;
        if (quantity >= 20 && quantity < 50)
            discount = .30;
        if (quantity >= 50 && quantity < 100)
            discount = .40;
        if (quantity >= 100)
            discount = .50;
        cout << "Your discount is:" << setw(8) << discount * 100 << "%\n\n";
    }
    else {
        cout << "You must enter a number more than 0.\n";
        return 0;
    }
    discountDollar = price * discount;
    total_price = price - discountDollar; 

    cout << fixed << setprecision(2);
    cout << "Regular price: " << setw(11) << price << endl;
    cout << "Discount: " << setw(16) << discountDollar << endl;
    cout << "Total price: " << setw(13) << total_price;
    return 0;
}