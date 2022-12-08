#include <iostream>
using namespace std;

int main()
{
    float m, g;
    cout << "Fuel capacity: ";
    cin >> g;
    cout << "Miles traveled: ";
    cin >> m;

    float r = m / g;
    cout << r;

    return 0;
}