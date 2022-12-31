//This is a menu-driven progrma that makes a function call for each selection the user makes.
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void showMenu();
void showFees(double, int);

int main()
{
    int choice;     // to hold a mneu choice
    int months;     // to hold a number of months

    //constants for the menu choice
    const int       ADULT_CHOICE = 1,
                    CHILD_CHOICE = 2,
                    SENIOR_CHOICE = 3,
                    QUIT_CHOICE = 4;

    //constants for membership rates
    const double    ADULT = 40.0,
                    CHILD = 20.0,
                    SENIOR = 30.0;

    //setup numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    do
    {
        //display the menu and get the user's choice
        showMenu();
        cin >> choice;

        //validate the menu selection
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        //if the user does not want to quit, proceed
        if (choice != QUIT_CHOICE)
        {
            //get the number of months
            cout << "For how many months? ";
            cin >> months;

            //display the membership fees
            switch (choice)
            {
                case ADULT_CHOICE:
                    showFees(ADULT, months);
                    break;
                case CHILD_CHOICE:
                    showFees(CHILD, months);
                    break;
                case SENIOR_CHOICE:
                    showFees(SENIOR, months);
            }
        }
    } while (choice != QUIT_CHOICE);
    return 0;
}

//definition of function showMenu which displays the menu
void showMenu()
{
    cout    << "\n\t\tHealth Club Membership\n\n"
            << "1. Standard Adult Membership\n"
            << "2. Child Membership\n"
            << "3. Senior Citizen Membership\n"
            << "4. Exit program\n"
            << "Enter your choice: ";
}

//definitoin of the function showFees
void showFees(double memberRate, int months)
{
    cout    << "The total charges are $"
            << (memberRate * months) << endl;
}
