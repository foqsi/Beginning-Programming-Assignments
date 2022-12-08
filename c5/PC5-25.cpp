/*
Modify the student lineup program described in PC14 so it gets the name of a file. Names should be read in until there is no more data to read. If you have downloaded this book's source code, you will find a file named LineUp.txt in the Chapter 05 folder. You can use this file to test the program.
------
PC14
A teacher has asked all her students to line up according to their first name. For example, in one class Amy will be at the front of the line, and Yolanda will be at the end. Write a program that prompts the user to enter the number of students in the class, then loops to read that many names. Once all the names have been read, it reports which student would be at the front of the line and which one would be at the end of the line. You may assume that no two students have the same name. 
Input Validation: Do not accept a number less than 1 or greater than 25 for the number of students.
------

Prof
The program should prompt the user for the file name and read the data from the file. A suitable file of names (List of Random Names) is provided on Moodle. Note that these names might include spaces; handle your input accordingly. The expected output is two names; do not show the entire file (or you will regret that code when you do the associated programming quiz that processes thousands of names). 

Do not use arrays or sorting for this problem! 
*/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream            inputFile;
    string              name,
                        filename;
    int                 studentNum;
    const double        MIN_STUDENTS = 1,
                        MAX_STUDENTS = 25;

    cout << "What is the filename? ";
    cin >> filename;
    cout << "How many students are in your class? ";
    cin >> studentNum;

    while (studentNum < MIN_STUDENTS || studentNum > MAX_STUDENTS)
    {

        cout << "Error: Enter a number of students from 1-25: ";
        cin >> studentNum;
    }

    inputFile.open(filename);
    if (!inputFile)
    {
        cout << "Error: Cannot open file.\n";
        return 0;
    }

    string currentLine;
    for (int i = 0; i < studentNum; ++i) {
        getline(inputFile, currentLine);
        cout << currentLine << endl;
    }

    inputFile.close();
}
