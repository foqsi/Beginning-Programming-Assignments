#include <iostream>
using namespace std;
{
//NOTES FOR ARRAYS AND VECTORS C7
/*
Arrays allow you to store and work with multiple values of the same data type.
An array works like a variable that can store a group of values, all of the same type. They are stored together in consecutive memory locations.
*/
int days[6]; //int = data type | days = variable | [6] = index

//ARRAYS
//Works like a variable that can store a group of values of the same time.
//Array definition
int days[6]; //the 6 is size declarator, [6] dictates how many objects are stored [6] is the subscript aka index
int hours[2] = 20;//stores the number 20 in the first element of the array
//An element is the number in the [] 0-* [0][1][2][3][4][5]
int hours[1] = 20;
//The declarator must be a constant integer expression with a value greater than zero or
//a named constant such as-----
const int NUM_DAYS = 6;
int days[NUM_DAYS];

//ARRAY MEMORY
//The amount of memory used by an array depends on the array's data type and the number of leements. The hours array here is an array of six shorts
short hours[6];
//A typical system, a short uses 2 bytes of memory, so the hours array would occupy 12 bytes

//Size of an array can be calculated by multiplying the size of an individual element by the number of elements in the array
//Array Definition          #of Elements            Size of each element            Size of array
char letters[25];           //25                    1 byte                          25 bytes
short rings[100];           //100                   2 bytes                         200 bytes
int miles[84];              //84                    4 bytes                         336 bytes
float temp[12];             //12                    4 bytes                         48 bytes
double distance[1000];      //1000                  8 bytes                         8000 bytes

int days[1];
int days[2]; int days[3]; //

//RANGE-BASE LOOPS
//Iterates once for each element in an array
//format
    int numbers[] = { 3, 6, 9 };
    for(int val : numbers){
        cout << val;
    }
//AUTO Keyword to specify the range variable's data type. Example:
int[] numbers = { 3, 6, 9};
for (auto val : numbers)
    cout << val << endl;

//Reference variable for array indicates an alias for the element. Example:
for (int &val : numbers)
//Changes made to the variable will be made to the array elemenet it references


//Summing values in array
//use a loop with an accumulator variable
const int NUM_UNITS = 24;
int units[NUM_UNITS];
int total = 0;
for (int count = 0; count < NUM_UNITS; count++;
    total += units[count];
//or a range based for loop
int total = 0;
for (int val : units)
    total += val;

//ASSIGN one array to another by assigning the individual elements in the array, best done with loop
for (int count = 0; count < SIZE; count++)
    newValues[count] = oldValues[count];

//COMPARING arrays must be done by comparing the elements of the two arrays, such as
const int SIZE = 5;
int firstArray[SIZE] = {5, 10, 15, 20, 25};
int secondArray[SIZE] = {5, 10, 15, 20, 25};
bool arraysEqual = true;
int count = 0;
while (arraysEqual && count < SIZE){
    if (firstArray[count] != secondArray[count])
        arraysEqual = false;
    count++;
}
if(arraysEqual)
    cout << "Arrays are equal";
else
    cout << "Arrays not equal";


//Passing array to function as argument - see array passtofunction.cpp or arraypass2twoarraytofunction.cpp

//2Dimensional arrays - 2 subscritps
scores[1][2]; //[1] is the row while [2] is the column
scores         Column 0        Column 1     Column 2        Column 3
Row 0           [0][0]          [0][1]        [0][2]          [0][3]
Row 1           [1][0]          [1][1]        [1][2]          [1][3]
Row 2           [2][0]          [2][1]        [2][2]          [2][3]

//When initializing a 2-dimensional array, it helps to enclose each row's initialization list in a set of braces, such as
int hours[3][2] = {{8, 5}, {7, 9}, {6, 3}};
//The same definition could also be written as
int hours[3][2] =   {{8, 5},
                     {7, 9},
                     {6, 3}};
//Either case, values are assigned as
hours[0][0] is 8
hours[0][1] is 5
hours[1][0] is 7
hours[1][1] is 9
hours[2][0] is 6
hours[2][1] is 3

//Always use double braces. They allow the ability to leave out initializer within a row
int table[3][2] = {{1}, {3, 4}, {5}};
}