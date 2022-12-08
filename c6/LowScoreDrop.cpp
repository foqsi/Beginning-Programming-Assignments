/*
Download the "List of Random Doubles" file from Moodle. Then use the "low score drop" algorithm in a program to read and process an indeterminate number of floating-point scores from a file. The program should then display the result (the average of the values in the file, with the lowest score dropped).

There is no restriction on these values; they might be negative or positive, and the values can be as small or large as the language permits.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    ifstream infile("RandomDoubles.txt");
    if(!infile){
        cout<<"Error: could not find file" << endl;
    }
    double num, lowest, average, total = 0; int count = 0;
    while (infile >> num){
        total += num;
        if(count==0 || lowest > num) lowest = num;
            count += 1;
        }
    infile.close();
    total = total - lowest;
    count = count - 1;
    average = total / count;
    cout<< count << " numbers. "
        << "Average after dropping the lowest number(" << lowest << ") " << "is "
        << setprecision(2)<<fixed<<showpoint
        << average;
    return 0;
}