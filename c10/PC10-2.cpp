/*
Write a function that accepts a pointer to a C-string as an argument and returns the number of words contained in the string. For instance, if the string argument is "Gravity" the function should display "ytivarG". Demonstrate the function in a program that asks the user to input a string the passes it to the function.

Write a function that accepts a string and returns a string in which the contents are the reverse of the original string, and a program in which this function is demonstrated.

     The prototype is   string reverseString(const string &);

This might need a little explanation. We want to pass the string by reference (as is customary for objects) but we don't want the function to make any changes to our string. Thus, we pass as a "constant reference." Newer languages like Java do this automatically; if you pass an object to a Java method, it's handled internally kind of like this, as a constant reference to that object. Any changes made to the object within the function are strictly local; the original object is unchanged. So our function will return a brand new string with contents equal to the reverse of the string sent to the function.

For your screen shot, enter the palindrome "Able was I ere I saw Elba"
*/

#include <iostream>
#include <string>
using namespace std;

string reverseString(const string &);

int main(){
    string line;
    cout << "Enter text:\n";
    getline(cin, line);
    cout << reverseString(line) << endl;
}
string reverseString(const string &line){
    string reversedString;
    int len = line.length();
    for (int i = len - 1; i >= 0; i--)
        reversedString += line[i];
    return reversedString;
}