#include <iostream>
using namespace std;

int main(){
    int numbers[] = {10, 20, 30, 40, 50};//Range based for loops? int[] numbers = { 3, 6, 9 };
    for (int val : numbers){
        cout << "The next value is ";
        cout << val << endl;
    }
}