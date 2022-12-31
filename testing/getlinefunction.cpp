//This program demonstrates how the getline function can be used for all of a program's input
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string input;
    string name;
    int idNumber;
    int age;
    double income;

    //get user's ID number
    cout << "What is your ID number? ";
    getline(cin, input);        //read as a string
    idNumber = stoi(input);     //conver to int

    //get the user's name
    cout << "What is your name? ";
    getline(cin, name);

    //get user's age
    cout << "How old are you? ";
    getline(cin, input);        //read as string
    age = stoi(input);          //convert to int

    //get user's income
    cout << "What is your annual income? ";
    getline(cin, input);        //read as string
    income = stod(input);       //convert to double

    //show the resulting data
    cout << setprecision(2) << fixed << showpoint;
    cout << "Your name is " << name
         << ", you are " << age
         << " years old, \nand you make $"
         << income << " per year.\n";
}