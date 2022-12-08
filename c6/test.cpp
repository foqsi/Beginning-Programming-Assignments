#include <iostream>
#include <iomanip>
using namespace std;

const double    PAY_RATE = 22.55,
                BASE_HOURS = 40.0,
                OT_MULTIPLIER = 1.5;

double getBasePay(double);
double getOvertimePay(double);

int main()
{
    double      hours,
                basePay,
                overtime = 0.0,
                totalPay;

    cout << "How many hours did you work? ";
    cin >> hours;

    basePay = getBasePay(hours);

    if (hours > BASE_HOURS)
        overtime = getOvertimePay(hours);

    totalPay = basePay + overtime;

    cout << setprecision(2) << fixed << showpoint;

    cout    << "Base pay: $" << basePay << endl
            << "overtime pay $" << overtime << endl
            << "Total pay $" << totalPay << endl;

    return 0;
}

double getBasePay(double hoursWorked)
{
    double basePay;
    if (hoursWorked > BASE_HOURS)
        basePay = BASE_HOURS * PAY_RATE;
    else
        basePay = hoursWorked * PAY_RATE;
}

double getOvertimePay(double hoursWorked)
{
    double overtimePay;

    if (hoursWorked > BASE_HOURS)
    {
        overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
    }
    else
        overtimePay = 0.0;

    return overtimePay;
}