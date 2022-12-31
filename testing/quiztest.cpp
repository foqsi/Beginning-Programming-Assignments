#include <iostream>
using namespace std;

void showInts(int, int);
void changeInts(int &, int &);

int main(){
    int first = 1, second = 2;
    showInts(first, second);
    changeInts(first, second);
    showInts(first, second);
    return 0;
}


void showInts(int first, int second){
    cout << first << " " << second << endl;
}

void changeInts(int & aNumber, int & anotherNumber){
    int first = 3, second = 4;
    anotherNumber = second * anotherNumber;
    aNumber = first * aNumber;
}