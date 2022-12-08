#include <iostream>
using namespace std;

int main(){
    const int numScore = 2;
    int theScores[numScore];

    int count;
    int highest;
    int lowest;

    cout << "Enter a number: ";
    cin >> theScores[1];
    cout << "Enter another number: ";
    cin >> theScores[2];
    cout << "\nYou entered: " << theScores[1] << " and "<< theScores[2] << endl << endl;

    highest = theScores[0];
    for (count = 1; count < numScore; count++)
    {
        if (theScores[count] > highest)
            highest = theScores[count];
    }

    lowest = theScores[0];
    for (count = 1; count < numScore; count++)
    {
        if (theScores[count] < lowest)
            lowest = theScores[count];
    }
    cout << highest << endl << lowest;
}