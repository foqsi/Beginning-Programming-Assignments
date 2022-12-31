
/*
Got a 75 on this assignment


A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected. Write a program that asks for the month, the year, and the total amount collected at the cash register (i.e. sales plus sales tax). Assume the state sales tax is 4 percent, and the county sales tax is 2 percent. If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated as:

S = T/1.06
S is the products sales and T is the total income (product sales plus sales tax)

Program should display a report similar to:
Month : October
Total collected: $$$$$$$$
Sales: $$$$$$$
County sales tax: $$$$$$$$
State sales tax: $$$$$$
Total sales tax: $$$$$$$$$$$
 */
// state sales tax = 4%
// county sales tax = 2%

// input value 10,000
// const double STATE_SALES_TAX =
// month and year
//setprecision(num) << <fixed>

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string month, year;
    double total_collected, total_sales_tax, sales,
           county_sales_tax_dollars, state_sales_tax_dollar,
           total_sales_tax_dollars; //final dollar amount
           
    const double STATE_SALES_TAX = 1.04, 
                 COUNTY_SALES_TAX = 1.02;

    //input
    cout << "What is the month and year?\n";
    cin >> month >> year;
    cout << "What is the total collected?\n";
    cin >> total_collected;

    //vanity header
    cout << setw(16) << month << " : " << year << endl;
    cout << "---------------------------------" << endl;

    //calculations
    county_sales_tax_dollars = total_collected * COUNTY_SALES_TAX - total_collected;
    state_sales_tax_dollar = total_collected * STATE_SALES_TAX - total_collected;
    total_sales_tax_dollars = county_sales_tax_dollars + state_sales_tax_dollar;
    sales = total_collected - total_sales_tax_dollars;

    //display
    cout << setprecision(2) << fixed;
    cout << "Total collected: " << setw(16) << total_collected << endl;
    cout << "Sales: " << setw(26) << sales << endl;
    cout << "County tax sales: " << setw(15) << county_sales_tax_dollars << endl;
    cout << "State tax sales: " << setw(16) << state_sales_tax_dollar << endl;
    cout << "Total sales tax: " << setw(16) << total_sales_tax_dollars << endl;

    return 0;
}