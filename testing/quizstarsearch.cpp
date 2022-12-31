/*
Modify your "Star Search" program to read an unknown number of scores from a text file, execute the "Star Search" algorithm (drop the lowest and highest scores, then average the rest) and display the result, with three digits after the decimal point.

As per the Star Search specifications, only scores from 0 - 10 will be accepted. Any score that is outside that range is to be rejected, and is not included in the average. That means that invalid scores can't be the high or low scores either.

For example: if the list is

6.1  -5.1  2.0  3.5  5.8  2.0  12.9  5.0  9.9  10.0

The -5.1 and 12.9 are rejected as invalid (not in the range 0-10).

2.0 and 10.0 are the low and high scores to be dropped.

The remaining SIX scores are averaged.

If you wish to use this data for testing, the answer is 5.383

Note that you don't know the number of scores in advance, and you will not be using arrays in this problem. It's more like the Chapter 5 version, where we process as we read the numbers. But it's nearly the end of the semester and it's nice to have an easy quiz at this point.
*/
#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData(double &);
void calcAverage(double theScores [], int numScore);
double validation(double &);
double getSmallest(const double theScores [], int numScore);
double getLargest(const double theScores [], int numScore);

int main(){
    int numScore = 5;
    double theScores[numScore];
    for (int i = 0; i < numScore; i++){
        getJudgeData(theScores[i]);
    }
    calcAverage(theScores, numScore);
}
void getJudgeData(double &theScores){
	cout << "Enter a Score: ";
	cin >> theScores;
    validation(theScores);
}
double getSmallest(const double theScores [], int numScore){
    double lowest = theScores[0];
    for (int count = 1; count < numScore; count++){
        if (theScores[count] < lowest){
            lowest = theScores[count];
        }
    }
    return lowest;
}
double getLargest(const double theScore[], int numScore){
    double highest = theScore[0];
    for (int count = 1; count < numScore; count++){
        if (theScore[count] > highest){
            highest = theScore[count];
        }
    }
    return highest;
}
double validation(double &theScore){
	while (theScore < 0 || theScore > 10){
		cout << "Error: Enter a score number 1-10: ";
		cin >> theScore;
	}
	return theScore;
}
void calcAverage(double theScores[], int numScore){
    double lowest = getSmallest(theScores, numScore);
    double highest = getLargest(theScores, numScore);
    cout << fixed << setprecision(2);
    for (int i = 0; i < numScore; i++){
        cout << "Score #" << (i+1) << ": ";
        cout << theScores[i] << endl;
    }
    double sum = 0;
    double average = 0;
    for (int i = 0; i < numScore; i++){
        sum += theScores[i];
    }
    sum -= highest + lowest;
    numScore -= 2;
    average = sum / numScore;
    cout << "Lowest score: " << lowest << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Sum: " << sum << endl << "Count: " << numScore << endl;
    cout << "Average: " << average;
}