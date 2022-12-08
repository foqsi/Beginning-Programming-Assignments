/*
Write a program that plays a word game with the user. The program should ask the user to enter the following:
Name
Age
Name of a city
Name of a college
A profession
+ two more entries
*/













#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string name, age, born, college, profession, favorite_food, favorite_sport;
    cout << "What is your name? " << endl;
    getline(cin,name);
    cout << "How old are you? " << endl;
    getline(cin,age);
    cout << "Where were you born? " << endl;
    getline(cin,born);
    cout << "What college did you go to? " << endl;
    getline(cin,college);
    cout << "What do you do for work? " << endl;
    getline(cin,profession);
    cout << "What is your favorite food? " << endl;
    getline(cin,favorite_food);
    cout << "What is your favorite sport? " << endl;
    getline(cin,favorite_sport);

    cout << "\n\n\n\n\n" << setw(20) << "Your info" << endl;
    cout << "------------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Place of birth: " << born << endl;
    cout << "College attended: " << college << endl;
    cout << "Current profession: " << profession << endl;
    cout << "Favorite food: " << favorite_food << endl;
    cout << "Favorite sport: " << favorite_sport << endl;

    return 0;
}