/*
Modify PC3-12 so that is uses a loop to display a table of the Celsius temperatures 0-20, and the Fahrenheit equivalents.

Prof
Have the user input the start and stop temperatures for the table as floating-point values. The values can be entered in any order. The values can be entered in any order. The lower of the two temperatures will be the start value, and the higher temperature will be the stop value. 

Take the start value down to the next lower integer. For example, if the start value is 12.9 make the start value equal to 12 instead. This operation is called the "floor" of 12.9. The floor of a floating-point number is the largest integer that is not larger than that number. Note: the floor of 12 (an integer) is still 12.

Take the stop value up to the next higher integer. For example, if the stop value is 24.1 take it up to 25. This operation is called the "ceiling" of 24.1. The ceiling of a floating-point number is the smallest integer that is not smaller than that number. The ceiling of 25 (an integer) is still 25.

The cmath library contains functions floor() and ceil() that will do the math for you. So if you want to compute and store the (integer) value of the floor of x, write something like

     int floor_x = floor(x);

The table will run from start to stop (in Celsius) in 1-degree increments. The table should show the values right-justified in columns, with the Celsius values shown as integers (no decimal point) in the left-hand column and with the Fahrenheit values displayed with two digits after the decimal point in the right-hand column. 

For your screen shot, enter temperatures of 14.1 and -9.5 degrees, in that order. This should produce a table from -10 to 15 degrees.
*/








#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
     double         value1, 
                    value2, 
                    end, 
                    F;
     int            floor_start;
     int            ceil_end;

     cout << "Enter the first value: ";
     cin >> value1;
     cout << "Enter the second value: ";
     cin >> value2;

     cout << "-----------------------\n";
     cout << "Celsius" << "\t     " << "Fahrenheit" << endl;
     cout << "=======================\n";
     cout << fixed << right << setprecision(1);
     

     if (value1 > value2)
     {
          floor_start = floor(value2);
          ceil_end = ceil(value1);   
          for (int C = floor_start; C <= ceil_end; C++)
          {
               F = ((9.0 / 5) * C) + 32;               
               cout << right << setw(3) << floor_start;
               cout << "\t\t   " << F << endl;
               floor_start++;
          }        
     }

     if (value2 > value1)
     {
          floor_start = floor(value1);
          ceil_end = ceil(value2);     
          for (int C = floor_start; C <= ceil_end; C++)
          {
               F = ((9.0 / 5) * C) + 32;
               cout << right << setw(3) << floor_start;
               cout << "\t\t   " << F << endl;
               floor_start++;
          }
     }
     return 0;
}