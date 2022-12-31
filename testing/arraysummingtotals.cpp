#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    /*
        //SUMMING ALL THE ELEMENTS OF A TWO DIMENSIONAL ARRAY Table1
    const int NUM_ROWS = 5;         //Number of rows
    const int NUM_COLS = 5;         //Number of columns
    int total = 0;                  //Accumulator
    int numbers[NUM_ROWS][NUM_COLS] = {{2, 7, 9, 6, 4},
                                       {6, 1, 8, 9, 4},
                                       {4, 3, 7, 2, 9},
                                       {9, 9, 0, 3, 1},
                                       {6, 2, 7, 4, 1}};
    //Sum the array elements of table 2
    for (int row = 0; row < NUM_ROWS; row++){
        for (int col = 0; col < NUM_COLS; col++){
            total += numbers[NUM_ROWS][NUM_COLS];
        }
    }
    //Display sum
    cout << "The total is " << total << endl;
    */

    //SUMMING ROWS OF A TWO DIMENSIONAL
    const int NUM_STUDENTS = 3;         //Number of students
    const int NUM_SCORES = 5;           //Number of test scores
    double total;                       //Accumulator
    double average;                     //Holds students' average
    double scores[NUM_STUDENTS][NUM_SCORES] =   {{88, 97, 79, 86, 94},
                                                 {86, 91, 78, 79, 84},
                                                 {82, 73, 77, 82, 89}};
//SUM ROWS
    //Get each student's average score
    for(int row = 0; row < NUM_STUDENTS; row++){
        //Set accumulator
        total = 0;
        //Sum a row
        for(int col = 0; col < NUM_SCORES; col++){
            total += scores[row][col];
        }
        //Get the average
        average = total / NUM_SCORES;
        //Display the average
        cout << "Score average for student " << (row + 1) << " is " << average << endl;
    }
//SUM COLUMNS
    for(int col = 0; col < NUM_SCORES; col++){
        //Reset accumulator
        total = 0;
        //Sum a column
        for(int row = 0; row < NUM_STUDENTS; row++){
            total += scores[row][col];
        }
        //Get average
        average = total / NUM_STUDENTS;
        //Display average
        cout << "Class average for test " << (col + 1) << " is " << average << endl;
    }
}