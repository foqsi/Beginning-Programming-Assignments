/* DUE 18
Write a program that calculates the average of a group of test scores, where the lowest score in the group is dropped. It should use the following functions:
-void getScore() should ask the user for a test score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five scores to be entered.
-void calcAverage() should calculate and display the average of the four highest scores. This function should be called just once by main and should be passed the five scores.
-double findLowest() should find and return the lowest of the scores passed to it. It should be called by calcAverage, which uses the function to determine which of the five scores to drop.

num validation: Do not accept test scores lower than 0 or higher than 100.
----
Prof
The findLowest() and findHighest()functions accept five parameters of type double.
-Write a separate function for validation that returns true if the value is in the given range, and false otherwise
The getScore() function should call the validation function to validate scores. Note that the getScore() function has only one parameter, a reference to a double. This function does not return a value.

*/
// NO GLOBAL VARIABLES ALLOWED
// global CONSTANTS are fine
#include <iostream>
#include <iomanip>
using namespace std;

void getScore(double &);
void calcAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
double validation(double &);

int main(){
	double score1, score2, score3, score4, score5;

	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);

	calcAverage(score1, score2, score3, score4, score5);

	return 0;
}
void getScore(double &score){
	cout << "Enter a test score: ";
	cin >> score;
	validation(score);
}
double validation(double &score){
	while (score < 0 || score > 100){
		cout << "Error: enter a score number 1-100: ";
		cin >> score;
	}
	return score;
}
double findLowest(double score1, double score2, double score3, double score4, double score5){
	double lowestScore;
	if (score1 <= score2)
		lowestScore = score1;
	else {
		lowestScore = score2;
	if (score3 < lowestScore)
		lowestScore = score3;
	if (score4 < lowestScore)
		lowestScore = score4;
	if (score5 < lowestScore)
		lowestScore = score5;
	}
	return lowestScore;
}
double findHighest(double score1, double score2, double score3, double score4, double score5){
	double highestScore;
	if (score1 >= score2)
		highestScore = score1;
	else {
		highestScore = score2;
	if (score3 > highestScore)
		highestScore = score3;
	if (score4 > highestScore)
		highestScore = score4;
	if (score5 > highestScore)
		highestScore = score5;
	}
	return highestScore;
}
void calcAverage(double score1, double score2, double score3, double score4, double score5){
	double lowScore = findLowest(score1, score2, score3, score4, score5);
	double highScore = findHighest(score1, score2, score3, score4, score5); //not used
	double sum = score1 + score2 + score3 + score4 + score5 - lowScore;
	double average = sum / 4;
	cout << setprecision(2) << fixed << showpoint;
	cout << "The average score of your tests is: " << average << endl;
}