/*
Write a program that generates a random number and asks the user to guess what the number is. If the user's guess is higher than the random number, the program should display "Too high, try again." If the user's guess is lower than the random number, the program should display "Too low, try again." The program should use a loop that repeats until the user correctly guesses the random number. Make the program keep a count of the number of guess the user makes. When the user correctly guesses the random number, the program should display the total number of guesses.

Prof
One way to create a pseudo-random three digit number (and we are including one- and two-digit numbers as well) is rand()%1000. That gives numbers from 000 to 999, which is just what we want.

As specified, have the program tell the player how many guesses were used. A good player should always be able to find a three-digit number in ten or fewer guesses.

For EXTRA CREDIT provide a version of this program that displays a menu that allows the user to select easy (3 digit number), medium (6 digit number), or hard (9 digit number). The maximum value of an int is ten digits (it is 2,147,483,647 if you really want to know) so you have (barely) enough room in the int data type to accomplish this. However - the largest pseudorandom number that our version of C++ delivers is a mere 32,767 so our method described above of getting our game numbers will not work for larger games. You will have to think outside the box on this one to get a nine-digit pseudorandom number. Let me know in a Moodle comment how you did it. Note that you should be able to guess a "hard" number in thirty tries.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char    response;
    int     userguess,
            guesses = 0,
            number;

    while (1)
    {
        cout << "\n\nTry guessing the number from 0 and 1000.\n";

        guesses = 0;

        number = rand()%100;

        do
        {
            cout << "Enter your guess: ";
            cin >> userguess;

            if (userguess > number)
                cout << "Too high, try again.\n\n";
            if (userguess < number)
                cout << "Too low, try again.\n\n";

            guesses++;
        }
        while (userguess > number || userguess < number);
            cout << "\nYou guess the right number!";
            cout << "\nYou guessed " << guesses << " times!";
            cout << "\n\nWould you like to play again? (Y/N) ";
            cin >> response;

        if (response == 'n' || response == 'N')
            return 0;
    }
}