/* DUE 18
A particular talent competition has five judges, each of whom awards a score between 0 and 10 to each performer. Fractional scores, such as 8.3, are allowed. A performer's final score is determined by dropping the highest and lowest scores received. Then averaging the three remaining scores. Write a program that uses this method to calculate a contestant's score. It should include the following functions:
-void getJudgeData() should ask the user for a judge's score, store it in a reference parameter variable, and validate it. This function should be called by main once for each of the five judges.
-void calcScore() should calculate and display the average of the three scores that remain after dropping the highest and lowest scores the performer received. This function should be calle djust once by main and should be passed the five scores.
The last two functions, described below, should be called by calcScore, which uses the returned information to determine which of the scores to drop.
-int findLowest() should find and return the lowest of the five scores passed to it.
-int findHighest() should find and return the highest of the five scores passed to it.
Input validation: Do not accept judge scores lower than 0 or higher than 10.
-----
PROF
Implement the functions exactly as specified in the textbook, other than correction of the following error:
The findLowest() and findHighest() functions should have return type double, not int.
This means you can use the same findLowest() function for both this and the previous Programming Challenge. You don't have to change a thing! Also note that the getScore() function in the previous challenge and the  getJudgeData() function in this one are exactly the same other than the name and the validation criteria. If you completed the previous Programming Challenge, this one is easy; you can re-use a lot of code you've already written.
Show results with exactly two digits after the decimal point.
Do not make use of arrays in this program; that will be in a future assignment.

Deliverables:
Program file (PC6-12.cpp) and a screen shot of your program in action.
For your screen shot, use input
5.5 6.0 -9 (rejected as invalid) 9 (corrected) 7.5 8.8
*/

#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData(double &);
void calcAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
double validation(double &);

int main(){
    double score1, score2, score3, score4, score5;

    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}
void getJudgeData(double &score){
	cout << "Enter a score: ";
	cin >> score;
	validation(score);
}
double validation(double &score){
	while (score < 0 || score > 10){
		cout << "Error: enter a score number 1-10: ";
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
	double highScore = findHighest(score1, score2, score3, score4, score5);
	double sum = score1 + score2 + score3 + score4 + score5 - lowScore - highScore;
	double average = sum / 3;
	cout << setprecision(2) << fixed << showpoint;
	cout << lowScore << endl << highScore << endl;
	cout << "The average score of the performance is: " << average << endl;
}