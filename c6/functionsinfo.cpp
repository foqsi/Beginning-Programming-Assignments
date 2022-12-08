#include <iostream>
using namespace std;
//*****************************************************************************************************************//
//*****************************************************************************************************************//
//these are function prototypes
void displayMessage(); //These prototypes allow the function to be called
int first();
bool isPrime();
void second();
//*****************************************************************************************************************//
//*****************************************************************************************************************//
//Functions are beneficial for CODE REUSE.
//Function creation requires the 4 items below
//Return Type - the value type that is sent from the function                           - int, bool, void, double etc..
//Name - a descriptive name                                                             - name
//Parameter List - a list of variables that hold the values being passed to the function- (score1, score2, score3) etc..
//& Body - the set of statements that perform the function's operation                  - the code/statements of function
//*****************************************************************************************************************//
//*****************************************************************************************************************//
//VOID Functions simply performs one or more statements, then automatically terminates
//example
void displayMessage(int){ //(int) is a variable parameter, which allows a value to be sent to the function
    cout << "Hello, this function will automatically terminate after this statement.";
}
//*****************************************************************************************************************//
//*****************************************************************************************************************//
//CALLING a Function, used within another block of statements to call a function to be performed
//example
int main(){
    cout << "This message is from the regular program.";
displayMessage(); //A function call is a statement that causes a function to execute
    cout << "This message is from the regular program again.";
int test = second();
//*****************************************************************************************************************//
//*****************************************************************************************************************//
//SENDING DATA INTO A FUNCTION
//Values sent into a function are called ARGUMENTS.
//example
first(5); //The value being sent is 5
}
//*****************************************************************************************************************//
//*****************************************************************************************************************//
//Function definition contains the statements that makes up the function, such as:
int first(int){ // FUNCTION HEADER
    cout << "This is the first function.";
}
int second(int, int){
    //Return a value from a function
    int y = 123;
    return y; //When this is called, the value will equal 123.
}