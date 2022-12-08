//Edward Davis
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double MONTHLY_FEE = 10.00, OVERDRAFT_FEE = 20.00, LOW_BAL_FEE = 15.00;
    int atmTransNum, checksNum;
    double initialBalance, balanceAfterFee, balanceFinal = 0, deposit, balance_Final,
        checkWritten = 0, checkFee = 0, checkFee_total = 0, checkAmount = 0,
        atmWithdraw = 0, atmFee = 0, atmFee_total = 0, atmAmount = 0,
        remainingBalance = 0;

    //get initial info and apply fees if applicable
    cout << fixed << setprecision(2);
    cout << "What is the initial balance? ";
    cin >> initialBalance;
    initialBalance = initialBalance - MONTHLY_FEE; //how to do monthly fee? switch?
    if (initialBalance < 400)
        initialBalance = initialBalance - LOW_BAL_FEE;
    if (initialBalance < 0)
    {
        cout << "Account is overdrawn!\n";
        initialBalance = initialBalance - OVERDRAFT_FEE;
    }
    cout << "Deposit amount: ";
    cin >> deposit;
    if (deposit < 0)
    {
        cout << "Please enter a deposit amount of 0 or more.";
        return 0;
    }
    cout << "Number of checks written: ";
    cin >> checksNum;


    //Calculate check fee
    if (checksNum > 0)
    {
        cout << "Check written amount: ";
        cin >> checkWritten;
        if (checksNum > 0 && checksNum < 20)
            checkFee = 0.10;
        else if (checksNum > 20 && checksNum < 39)
            checkFee = 0.08;
        else if (checksNum > 40 && checksNum < 59)
            checkFee = 0.06;
        else if (checksNum > 60)
            checkFee = 0.04;
        checkFee_total = (checksNum * checkFee);
        if (checkWritten <= 0)
        {
            cout << "Please enter an amount greater than zero.";
            return 0;
        }
    }
    if (checksNum < 0)
    {
        cout << "Please enter 0 or more for the number of checks written.";
        return 0;
    }
    cout << "Number of ATM transactions: ";
    cin >> atmTransNum;

    //Calculate ATM fee if more than 5 transactions
    if (atmTransNum > 0)
    {
        cout << "ATM withdrawal amount: ";
        cin >> atmWithdraw;
        if (atmTransNum > 5)
        {
            atmFee = 0.10;
            atmFee_total = atmFee * (static_cast<double>(atmTransNum) - 5);
        }
        if (atmWithdraw <= 0)
        {
            cout << "Please enter an amount greater than zero.";
            return 0;
        }
    }
    if (atmTransNum < 0) 
    {
        cout << "Please enter 0 or more for the number of ATM transactions.";
        return 0;
    }

    //Calculate balance fees - trying to ensure the fees match instructions
    balanceAfterFee = initialBalance - atmWithdraw - atmFee_total - checkFee_total - checkWritten;
    if (balanceAfterFee < 400 && balanceAfterFee > 0)
        remainingBalance = balanceAfterFee - LOW_BAL_FEE;
    if (remainingBalance < 0)
        balanceFinal = remainingBalance - OVERDRAFT_FEE;
    if (remainingBalance > 0)
        balanceFinal = remainingBalance;
    if (balanceAfterFee < 0)
        balanceFinal = balanceAfterFee - OVERDRAFT_FEE;
    balance_Final = balanceFinal + deposit;

    //output
    cout << "-----------------------------------------------" << endl;
    cout << "Initial balance: " << setw(19) << initialBalance << endl;
    cout << "Monthly fee: " << setw(23) << MONTHLY_FEE << endl;
    if (checksNum > 0) //if no checks written, does not display check line
    {
        cout << "Number of written checks: " << setw(10) << checksNum << endl;
        cout << "Check fee: " << setw(25) << checkFee_total << endl;
        cout << "Check written amount: " << setw(14) << checkWritten << endl;
    }
    if (atmTransNum > 0) //if no ATM transactions, does not display ATM line
    {
        cout << "ATM Transactions: " << setw(18) << atmTransNum << endl;
        cout << "ATM fee: " << setw(27) << atmFee_total << endl;
        cout << "ATM withdrawal amount: " << setw(13) << atmWithdraw << endl;
    }
    cout << "Balance afer fees: " << setw(17) << balanceAfterFee << endl;
    if (balanceAfterFee < 400)
        cout << "Low balance fee: " << setw(19) << LOW_BAL_FEE << endl;
    if (balanceAfterFee < 0)
        cout << "Overdraft fee: " << setw(21) << OVERDRAFT_FEE << endl;
    cout << "Amount deposited: " << setw(18) << deposit << endl;
    cout << "Final balance: " << setw(21) << balance_Final << endl;
    return 0;
}