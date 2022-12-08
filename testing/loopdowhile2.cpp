#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int dvdCount = 1;
    int numDVDs;
    double total = 0.0;
    char current;

    //get number of dvds
    cout << "How many DVDs are being rented? ";
    cin >> numDVDs;

    //Determin charges
    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " is free!\n";
            continue;
        }
        cout << "Is DVD #" << dvdCount;
        cout << " a current release? (Y/N) ";
        cin >> current;
        if (current == 'y' || current == 'Y')
            total += 3.50;
        else
            total += 2.50;
    } while (dvdCount++ < numDVDs);

        //display total
        cout << fixed << showpoint << setprecision(2);
        cout << "The total is $" << total << endl;
        return 0;
    
}