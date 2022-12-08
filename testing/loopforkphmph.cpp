#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int             kph;
    double          mph;
    const double    CONVERSION_FACTOR = 0.6214;
    const int       START_KPH = 60,
                    END_KPH = 130,
                    INCREMENT = 10;

    //formatting
    cout << fixed << showpoint << setprecision(1);

    //table heading
    cout << "KPH\tMPH\n";
    cout << "----------------\n";

    //display speeds
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
    {
        //calculate mph
        mph = kph * CONVERSION_FACTOR;

        //display speed in kph and mph
        cout << kph << "\t" << mph << endl;
    }
}