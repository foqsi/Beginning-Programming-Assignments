#include <iostream>
using namespace std;
int main()
{
    double getacre, acresqfeet;
    cout << "Number of acres: ";
    cin >> getacre;
    const double ACRE = getacre;
    acresqfeet = ACRE * 43560;
    cout << ACRE << " acres is " << acresqfeet << " square feet.";

    return 0;
}