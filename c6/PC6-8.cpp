/* DUE 18
Write a function named coinToss that simulates the tossing of a coin. When you call the function, it should generate a random number in the range of 1 through 2. If the random number is 1, the function should display "heads." If the random number is 2, the function should display "tails." Demonstrate the function in a program that asks the user how many times the coin should be tossed, then simulates the tossing of the coin that number of times.
--
Professor's addition
We are altering the specifications. The coin toss function does not receive any parameters, and rather than display "heads" or "tails" have the coin toss function return an int - either 0 or 1 - and let the main program interpret that response and handle the text output. In addition, after the user enters the total number of tosses, after displaying the sequence of "heads" and "tails" also state the total number of heads and total number of tails obtained.

Deliverables:
In your screen shot, have the user flip the coin twelve times.
*/


#include <iostream>
#include <time.h>
using namespace std;
//function prototype
int coinToss();

int main()
{   
    int     numberOfTosses,
            heads = 0,
            tails = 0;
                
    cout << "How many times do you want to toss the coin? ";    
    cin >> numberOfTosses;

    srand(static_cast<unsigned int>(time(0))); //generate random number
    for (int counter = 1; counter <= numberOfTosses; counter++)
    {
        int result = coinToss();
        cout << result; 
        if (result == 1)
        {
            result = heads;
            heads++;
        }
        else
        {
            result = tails;
            tails++;
        }
    }
    cout    << "\nTotal heads: " << heads << endl   
            << "Total tails: " << tails << endl;
}

int coinToss()
{    
    int result = (rand() % 2);
    return result;
}