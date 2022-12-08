/* Due 25
Write a program that calculates the average number of days a company's employees are absent. The program should have the following functions:
-A function called by main that asks the user for the number of employees in the company. THis valude should be returned as an int. (The function accepts no arguments)
-A function called by main that accepts one argument: the number of employees in the company. The function should ask the user to enter the number of days each employee missed during the past year. The total of these days should be returned as int.
-A function called by main that takes two arguments: the number of employees in the company and the total number of days abset for all employees during the year. THe function should return, as a double, the average number of days abset. (this function does not perform screen output and does not ask the user for input.)
Input validation: Do not accept a number less than 1 for the numbe rof employees. DO not accept a negative numbe rfor the days any employee missed.
----
PROF
Implement the functions exactly as specified.
The average number of days out should show exactly two digits after the decimal point.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int getEmployeeNum();
int getEmployeeDaysAbsent(int);
double calcDaysMissedAverage(int &, int &);

int main(){
    int employeeNum, daysAbsentTotal;
    double averageDaysMissed;

    employeeNum = getEmployeeNum();
    daysAbsentTotal = getEmployeeDaysAbsent(employeeNum);
    averageDaysMissed = calcDaysMissedAverage(employeeNum, daysAbsentTotal);

    cout << "Average days missed for employees is: " << averageDaysMissed;
}
int getEmployeeNum(){
    int employeeNum;
    cout << "Number of Employees: ";
    cin >> employeeNum;
    while(employeeNum < 1){
        cout    << "Employee count must be more than 1.\n"
                << "Enter number of employees: ";
        cin >> employeeNum;
    }
    return employeeNum;
}
int getEmployeeDaysAbsent(int employeeNum){
    int daysAbsent, i;
    double daysAbsentTotal = 0.0;
    for(i = 1; i <= employeeNum; i++){
        cout << "Days out for employee " << i << ": ";
        cin >> daysAbsent;
        while(daysAbsent < 0){
            cout    << "Error: Number of days absent cannot be a negative value.\n"
                << "Enter days out for employee " << i << ": ";
            cin >> daysAbsent;
        }
        daysAbsentTotal += daysAbsent;
    }
    return daysAbsentTotal;
}
double calcDaysMissedAverage(int &employeeNum, int &daysAbsentTotal){
     return (double) daysAbsentTotal / employeeNum;
}