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