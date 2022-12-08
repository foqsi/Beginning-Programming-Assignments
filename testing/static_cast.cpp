#include <iostream>
using namespace std;
int main(){
    //typecast test
    int books, months, work;
    double perMonth;
    const double finger = 1.4;

    cout << "how many books do you plan to read? ";
    cin >> books;
    cout << "How many months will it take you to read them? ";
    cin >> months;
    perMonth = static_cast<double>(books) / months; //books / months;
    work = static_cast<const double>(finger) / months;
    cout << "That is " << perMonth << " books per month.\n";
    cout << work;
    return 0;
}