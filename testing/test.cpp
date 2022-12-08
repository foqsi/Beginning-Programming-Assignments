#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int checksWritten, atmTransactions;
    const double MONTHLY_FEE = 10.0, LOW_BALANCE_FEE = 15.0,
				ATM_OVER_FIVE_FEE = 0.10, OVERDRAWN_FEE = 20.0;; 
	double checkFee = 0.0, atmFee = 0.0, runningBalance = 0.0, finalBalance = 0, depositAmount, 
				atmWithdrawalAmt, checkTotal, initialBalance;

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