#include <iostream>
using namespace std;

int inputValidate(int);
bool isPrime(int);

int main(){
    int number;
    cout << "Enter a number: ";
    number = inputValidate(number) || number < 0;

    cout    << "Your number is "
            << (isPrime(number) ? "PRIME." : "NOT PRIME.")
            << endl;

}

int inputValidate(int num1){
    while(!(cin >> num1)){
        cout    << "Error. Number must not be "
                << "0 or greater:";
    }
    return num1;
}

bool isPrime(int number){
    int isPrime = 0;
    for (int i = 1; i <= number; i++){
        if (number % i == 0)
            isPrime++;
    }
    return isPrime == 2 ? 1 : 0;
}