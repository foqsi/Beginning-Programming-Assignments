//This program uses two parallel arrays:
//one for hours and one for pay rate
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int NUM_EMPLOYEES = 5; //Number of employees
    int hours[NUM_EMPLOYEES];    //Holds hours worked
    double payRate[NUM_EMPLOYEES];//Holds pay rates

    //input the hours worked and the hourly rate
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their\n"
        << "hourly rates.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++){
        cout << "Hours worked by employee #" << (index+1) << ": ";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #" << (index+1) << ": ";
        cin >> payRate[index];
    }
    //Display each employee's gross pay
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++){
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #:" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
    return 0;
}
//Notice in the loops the same subscript is used to access both arrays. That's because the data for one employee is stored in the same relative position in each array. For example, the hours worked by employee #1 are stored in hours[0], and the same employee's pay rate is stored in payRate[0]. The subscript relates the data in both arrays