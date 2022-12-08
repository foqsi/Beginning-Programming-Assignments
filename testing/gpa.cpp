#include <iostream>
using namespace std;

int main()
{
    double test_score;

    cout << "What is your test score?\n";
    cin >> test_score;

    if (test_score >= 90)
        cout << "Your letter grade is an A!";
    else if (test_score >= 80)
            cout << "Your letter grade is a B.";
    else if (test_score >= 70)
           cout << "Your letter grade is a C.";
    else if (test_score >= 60)
            cout << "Your letter grade is a D.";
    else if (test_score <= 59)
            cout << "Your letter grade is an F.";
}