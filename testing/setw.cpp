#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int unus, duo, tres;

    unus = duo = tres = 5;

    unus += 4;
    duo *= 2;
    tres -=4;
    duo += tres;
    cout << unus << endl;
    cout << duo << endl;
    cout << tres << endl << endl;


    double x = 146.789, y = 24.2, z = 1.784;
    cout << "Hi" << setw(8) << x << endl;
    cout << left << setw(10) << y << endl;
    cout << right << setw(10) << z << endl;
    return 0;
}