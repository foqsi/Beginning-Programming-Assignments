#include <iostream>
using namespace std;

int main()
{
    double m, g;
    cout << "Fuel capacity: ";
    cin >> g;
    cout << "Miles traveled: ";
    cin >> m;

    double r = m / g;
    cout << r;

    return 0;
}