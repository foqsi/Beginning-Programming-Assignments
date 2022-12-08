#include <iostream>
using namespace std;
//post test loop, expression is tested after each iteration
int main()
{
    int score1, score2, score3;
    double average;
    char again;

    do
    {
        // get three scores
        cout << "Enter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3;

        //Calculate and display average
        average = (score1 + score2 + score3 ) / 3.0;
        cout << "The average score is " << average << ".\n";

        //Does the user want to average another set?
        cout << "Do you want to average another set? (Y/N) ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    return 0;
    
}