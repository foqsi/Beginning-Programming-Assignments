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
	int checksWritten, atmTransactions;
    const double MONTHLY_FEE = 10.0, LOW_BALANCE_FEE = 15.0,
				ATM_OVER_FIVE_FEE = 0.10, OVERDRAWN_FEE = 20.0;; 
	double checkFee = 0.0, atmFee = 0.0, runningBalance = 0.0, finalBalance = 0,            
                depositAmount, atmWithdrawalAmt, checkTotal, initialBalance;

	 //initial balance
    cout << "Enter the initial balance: ";
    cin >> initialBalance;
	
	//deposit amount 
    cout << "Enter deposit amount: ";
    cin >> depositAmount;
	if (depositAmount < 0) {
		cout << "Invalid dollar amount!";
		return 0;
	}

    //checks
	cout << "Enter the number of checks written: ";
	cin >> checksWritten;
	if (checksWritten < 0) {
		cout << "Invalid number of checks!";
		return 0;
	}
	if (checksWritten > 0) { 
        cout << "Enter the combined dollar amount of checks written: ";
        cin >> checkTotal;
        if (checkTotal <= 0) {
            cout << "Invalid dollar amount!";
            return 0;
        }
        //calculate check fee
        else {
            if (checksWritten < 20) {
                checkFee = 0.1 * checksWritten;
            }
			else if (checksWritten < 39) {
                checkFee = 0.08 * checksWritten;
            }
			else if (checksWritten < 59) {
                checkFee = 0.06 * checksWritten;
            }
			else {
                checkFee = 0.04 * checksWritten;
            }
        }
    }

	//ATM 
	cout << "Enter number of ATM transactions: ";
	cin >> atmTransactions;
	if (atmTransactions < 0) {
		cout << "Invalid transaction amount!";
		return 0;
	}
	if (atmTransactions > 5) { //calc ATM fee if applicable 
		atmFee = (atmTransactions - 5) * ATM_OVER_FIVE_FEE;
	}
	if (atmTransactions > 0) {
		cout << "Enter combined dollar amount of ATM transactions: ";
		cin >> atmWithdrawalAmt; 

		if (atmWithdrawalAmt <= 0) {
			cout << "Invalid withdrawal amount!";
			return 0;
		}
	}

	//apply charges and withdrawals 
	runningBalance = initialBalance - checkTotal - atmWithdrawalAmt - checkFee - atmFee - MONTHLY_FEE;

	//check for low balance and/or negative balance
	if (runningBalance < 400) {
		runningBalance -= LOW_BALANCE_FEE;
	}
	if (runningBalance < 0) {
		cout << "------------------------------------" << endl;
		cout << "ACCOUNT IS OVERDRAWN! \n";
		runningBalance -= OVERDRAWN_FEE;
	}

	//add deposit
	finalBalance = runningBalance + depositAmount;

	//output
	cout << fixed << showpoint << setprecision(2);
    cout << "------------------------------------" << endl;
    cout << "Initial balance: " << setw(19) << initialBalance << endl;
    cout << "Monthly fee: " << setw(23) << MONTHLY_FEE << endl;
	if (runningBalance < 400) {
        cout << "Low balance fee: " << setw(19) << LOW_BALANCE_FEE << endl;
	}
    if (runningBalance < 0) {
        cout << "Overdraft fee: " << setw(21) << OVERDRAWN_FEE << endl;
	}
    if (checksWritten > 0) { //if no checks written, does not display check line
        cout << "Number of written checks: " << setw(10) << checksWritten << endl;
        cout << "Check fee: " << setw(25) << checkFee << endl;
        cout << "Check written amount: " << setw(14) << checkTotal << endl;
    }
    if (atmTransactions > 0) { //if no ATM transactions, does not display ATM line
        cout << "ATM Transactions: " << setw(18) << atmTransactions << endl;
        cout << "ATM fee: " << setw(27) << atmFee << endl;
        cout << "ATM withdrawal amount: " << setw(13) << atmWithdrawalAmt << endl;
    }
    cout << "Balance afer fees: " << setw(17) << runningBalance << endl;
    cout << "Amount deposited: " << setw(18) << depositAmount << endl;
    cout << "Final balance: " << setw(21) << finalBalance << endl;
}