#include <iostream>
using namespace std;

int main()
{
    char employed;

    cout << "Answer the questions with Y or N.\n" <<
            "Are you employed?\n";
    cin >> employed;
    

    if (employed == 'Y' || employed == 'y')
        {
            cout << "Have you graduated from college in the past two years?\n";
            char recentgrad;
            cin >> recentgrad;

            if (recentgrad == 'Y' || recentgrad == 'y')
            {
                cout << "You qualify.";
            }
            else
                cout << "Sorry, you must have graduated in the past two years to qualify.";
        }
    else
        cout << "You must be employed to qualify.";
    return 0;
}