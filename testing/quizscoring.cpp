/*
Modify your Quiz Grader program to read files that contain 101 multiple-choice entries in each. As before, each entry is a single character. Process those files, then give the grade as a percentage, with two digits after the decimal point.

If your original Quiz Grader program worked and you followed the design principals taught in this class, you should be able to change one "20" to a "101" and clear this quiz with no further effort.
*/
//Edward Davis
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

const int NUMBEROFQUESTIONS = 101;
void readFileContents(char[], string, const int);
void showArray(const char[], const int);
void showAnswers(const vector<int>, const char[]);
void checkAnswers(const char[], const char[], int &,
                  vector<int> &, vector<int> &,
                  int &, int &, const int);
void showAllAnswers(const char[], const char[], const int);
double calcPercentage(const int, const int);
void showFinal(const vector<int>, const vector<int>, const char[], const char[],
               int, int, double);

int main(){
    char correctAnswers[NUMBEROFQUESTIONS],
         studentAnswers[NUMBEROFQUESTIONS];
    int numIncorrectQuestions,
        totalCorrect = 0,
        totalMissed = 0;
    double correctPercentage;
    string fileName;
    vector<int> incorrectQuestions;
    vector<int> correctQuestions;
    readFileContents(correctAnswers, fileName, NUMBEROFQUESTIONS);
    readFileContents(studentAnswers, fileName, NUMBEROFQUESTIONS);

    showAllAnswers(correctAnswers, studentAnswers, NUMBEROFQUESTIONS);

    checkAnswers(studentAnswers, correctAnswers, numIncorrectQuestions, correctQuestions, incorrectQuestions, totalMissed, totalCorrect, NUMBEROFQUESTIONS);

    correctPercentage = calcPercentage(totalCorrect, NUMBEROFQUESTIONS);

    showFinal(correctQuestions, incorrectQuestions, correctAnswers, studentAnswers,
              totalCorrect, totalMissed, correctPercentage);
}
void readFileContents(char array[], string fileName, const int ARRAY_SIZE){
    ifstream inputFile;
    cout << "Enter filename: ";
    cin >> fileName;

    inputFile.open(fileName);
    if(!inputFile){
        cout << "Error: Could not open file.\n";
    } else {
        for (int i = 0; i < ARRAY_SIZE; i++){
            inputFile >> array[i];
        }
    }
    inputFile.close();
}
void checkAnswers(const char studentAnswers[], const char correctAnswers[], int& numIncorrectQuestions, vector<int>& correctQuestions, vector<int>& incorrectQuestions, int& totalMissed, int& totalCorrect, const int NUMBEROFQUESTIONS)
{
    for (int i = 0; i < NUMBEROFQUESTIONS; i++) {
        if (studentAnswers[i] != correctAnswers[i]) {
            numIncorrectQuestions++;
            incorrectQuestions.push_back(i);
            totalMissed++;
        }
        else {
            correctQuestions.push_back(i);
            totalCorrect++;
        }
    }
}
void showAllAnswers(const char correctAnswers[], const char studentAnswers[],
                    const int NUMBEROFQUESTIONS){
    cout << "Correct Answers: " << endl;
    showArray(correctAnswers, NUMBEROFQUESTIONS);
    cout << endl;
    cout << "Student Answers: " << endl;
    showArray(studentAnswers, NUMBEROFQUESTIONS);
    cout << endl;
}
void showArray(const char array[], const int ARRAY_SIZE){
    for (int i = 0; i < ARRAY_SIZE; i++){
        if (i == (ARRAY_SIZE - 1)){
            cout << array[i];
        } else {
            cout << array[i] << ", ";
        }
    }
}
double calcPercentage(const int totalCorrect, const int NUMBEROFQUESTIONS){
    return (totalCorrect / static_cast<double>(NUMBEROFQUESTIONS)) * 100;
}
void showFinal(const vector<int> correctQuestions, const vector<int> incorrectQuestions,
                   const char correctAnswers[], const char studentAnswers[],
                   int totalMissed, int totalCorrect, double correctPercentage){
    cout << "Questions answered correctly: " << endl;
    showAnswers(correctQuestions, correctAnswers);
    cout << endl;
    cout << "Questions answered incorrectly: " << endl;
    showAnswers(incorrectQuestions, studentAnswers);
    cout << endl;
    cout << "Total missed questions: "
        << setw(3) << totalCorrect << endl;
    cout << "Total correct questions: "
        << totalMissed << endl << endl;
    cout << "Percentage of questions answered: %"
        << correctPercentage << endl;
    cout << "You " << (correctPercentage >= 70 ? "Passed" : "Failed")
        << " the exam."
        << endl;
}
void showAnswers(const vector<int> vector, const char array[]){
    for (int i = 0; i < vector.size(); i++){
        cout << right << setw(2) << (vector[i]+1) << ". "
            << array[vector[i]] << endl;
    }
}