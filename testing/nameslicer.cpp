//This program uses a function nameSlice to cut the last name off of a string that contains the user's first and last names
#include <iostream>
using namespace std;

void nameSlice(char[]);

int main(){
    const int SIZE = 41;
    char name[SIZE];

    cout << "Enter your first and last names separated by a space: ";
    cin.getline(name, SIZE);
    nameSlice(name);
    cout << "your first name is: " << name << endl;
}

//Definition of function nameSlice. Accpets character array as argument and scans for whitespace. Removes what is after the whitespace
void nameSlice(char userName[]){
    int count = 0;

    //located the first space or null terminator if no spaces
    while(userName[count] != ' ' && userName[count] != '\0')
        count++;

    //if a space was found, replace it with a null terminator
    if(userName[count] == ' ')
        userName[count] = '\0';
}