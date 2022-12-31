//This program demostrates the vector clear member function
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> values(100);

    cout << "The values vector has "
        << values.size() << " elements\n";
        values.clear();
        cout << "Now the values vector has " << values.size() << " elements.\n";


        //Detecting employ vector
    if(values.empty()){
        cout << "No values in value Vector.\n";
    }
}


