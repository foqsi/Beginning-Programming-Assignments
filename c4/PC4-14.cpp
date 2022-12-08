/*
A bank charges $10 per month 
-plus the following check fees for a commercial checking account:
$.10 each for fewer than 20 checks
$.08 each for 20-39 checks
$.06 each for 40-59 checks
$.04 each for 60 or more checks

  
Validation: Do not accept a negative value for the number of checks written. If a negative value is given for the beginning balance, display an urgent message indicating the account is overdrawn.

//////To do
-Write a program that asks for the beginning balance and the number of checks written.
-Also prompt the user for the total amount deposited. 
-Do not accept a value less than zero; display an error message and exit the program if this occurs.
-The bank also charges an extra $15 if the balance of the account falls below $400 (before any check fees are applied).
Compute and display the bank's service fees for the month.
-If the number of checks entered is greater than zero, prompt the user for the total amount of the checks written. Do not accept a value of zero or less; provide an error message and exit if the user enters invalid data.
-Prompt the user for the number of ATM transactions.
-If the number of transactions is greater than zero, also prompt for the total amount withdrawn. 
-Do not accept zero or less for that total amount. 
-The first five ATM transactions are free; charge a dime for each subsequent transaction.
If the balance after charges and withdrawals are applied but before the deposit is credited is less than the minimum balance of 400.00, charge them the low balance fee.  Yes, banks actually do it that way. 
-If that balance is less than zero display an "overdrawn" notice and charge them an additional "overdrawn fee" of $20.
Show your results as a vertical table, using appropriate formatting. All dollar amounts should be shown with exactly two digits after the decimal, and aligned by the decimal point in the table. 
-Counts (like the number of checks written) should be integers. 
Include lines for the initial balance, the monthly charge, the number of checks written (if not zero) and the check charge and the checks written amount, the number of ATM transactions (if not zero) and the ATM charge and amount withdrawn, the final balance at this point, the low balance fee (if applied), the overdrawn fee (if applied), the amount deposited, and the final balance. 

For your screen shot, enter an initial balance of 365.50, a deposit total of of 208.56, 22 checks written for a total of $410.55, and 7 ATM transactions for a total of $240. But in your testing make sure you first enter invalid values at every opportunity to demonstrate your program's ability to catch those errors.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int month, checkNumber, atmTransaction;
    double initialBalance, balance, remainingBalance, depositAmount, 
        checkDollar, checkDeposit, checkFee, checkFeeCalc, checkDollarDeposit,
        atmDollar, atmWithdraw, atmFee, atmDollarFinal, atmFeeTotal;
    const double MONTHLY_FEE = 10.00, LOW_BAL_FEE = 15.00, OVERDRAFT_FEE = 20.00;

    cout << fixed << setprecision(2);
    cout << "What is the initial balance? ";
    cin >> initialBalance;
    cout << "What is the total amount deposited? ";
    cin >> depositAmount;

     //Low balance
    if (initialBalance < 400)
        initialBalance - LOW_BAL_FEE;

    //Monthly charge
    

    //Checks
    cout << "Number of checks? ";
    cin >> checkNumber;
    if (checkNumber > 0)
    {
        cout << "Total amount in checks? ";
        cin >> checkDollar;
        if (checkDollar <= 0)
        {
            cout << "Please enter an amount greater than zero.";
            return 0;
        }
    }
    if (checkNumber > 0 && checkNumber < 20)
        checkFee = 0.10;
    else if (checkNumber > 20 && checkNumber < 39)
        checkFee = 0.08;
    else if (checkNumber > 40 && checkNumber < 59)
        checkFee = 0.06;
    else if (checkNumber > 60)
        checkFee = 0.04;
    checkFeeCalc = checkNumber * checkFee;
    checkDollarDeposit = checkDollar - checkFee;
    
    
    //ATM
    cout << "Number of ATM transactions? ";
    cin >> atmTransaction;
    if (atmTransaction > 0)
    {
        cout << "ATM transactions total? ";
        cin >> atmDollar;
        if (atmDollar <= 0)
        {
            cout << "Please enter an amount greater than zero.";
            return 0;
        }  
    }
    if (atmTransaction > 5)
    {
        atmFee = .05;
        atmWithdraw = atmDollar - (atmFee * atmTransaction);
        atmFeeTotal = atmFee * atmTransaction;
    }

    //Balance after charges/withdrawals?
    balance = (checkFee * checkNumber) + (atmFee * atmTransaction);
    if (balance < 400)
        balance - LOW_BAL_FEE;

    //Overdrawn
    if (balance < 0)
        remainingBalance = balance - OVERDRAFT_FEE;
        cout << "Urgent: Account overdrawn!" << endl;

    
    // 365.50 208.56 22 410.55 7 240
    cout << "-------------------------------------------" << endl;
    cout << "Initial Balance: " << setw(25) << initialBalance << endl <<
    "Monthly fee: " << setw(29) << MONTHLY_FEE << endl <<
    "Low balance fee: " << setw(25) << LOW_BAL_FEE << endl <<
    "Overdraft fee: " << setw(27) << OVERDRAFT_FEE << endl <<    
    "ATM Fee: " << setw(33) << atmFeeTotal << endl <<
    "Amount deposited: " << setw(24) << depositAmount << endl <<
    "Number of checks deposited: " << setw(14) << checkNumber << endl <<
    "Total deposited from check: " << setw(14) << checkDollarDeposit << endl <<
    "Number of ATM transactions: " << setw(14) << atmTransaction << endl <<
    "Total withdrawn from ATM: " << setw(16) << atmWithdraw << endl <<
    "Remaining Balance: " << setw(23) << remainingBalance << endl;

    return 0;
}