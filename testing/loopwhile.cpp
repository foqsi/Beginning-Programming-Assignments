#include <iostream>
using namespace std;
//tested for true of false value
int main()
{
    const double MAX_TEMP = 102.5;
    double temperature;

    //Get current temp
    cout << "Enter Celsius temp: ";
    cin >> temperature;

    //As long as necessary, instruct tech to adjust thermostat
    while (temperature > MAX_TEMP)
    {
        cout << "The temperature is too high. Turn the thermostat down and wait 5 minutes.\n"
            << "Then take Celsius temperature again and enter it here: ";
        cin >> temperature;
    }

    //remind tech to check temp again in 15 minutes
    cout << "The temperature is acceptable.\n"
        << "Check it again in 15 minutes.";

        return 0;
}