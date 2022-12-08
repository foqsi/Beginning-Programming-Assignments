#include <iostream>
#include <iomanip>
using namespace std;
//known number iterations
int main(){
    const int MIN_NUMBER = 1, MAX_NUMBER = 10;
    //int num;

    cout << "Number Number Squared\n";
    cout << "---------------------\n";
    for (int num = MIN_NUMBER ; num <= MAX_NUMBER ; num++){
        cout << num << "\t\t  " << right << setw(3) << (num * num) << endl;
    }
    return 0;

}