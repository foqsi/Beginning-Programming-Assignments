#include <vector>
#include <iostream>
using namespace std;

//Example of definition
vector<int> numbers;
//Vectors automatically expand, so there is no need to specify a value to it, but it is possible
vector<int>number(10);
//In this case, the vector starts with 10 elements and will automatically expand if more than 10 values are added to it

//If specifying a starting size, can also specify an initialization value
vector<int> numbers(10, 2);
//Here, numbers is defined as a vector of 10 ints and each element in numbers is initialized to the value 2

//It is possible to initiate a vector with values in another vector.
vector<int> numbers2(numbers);
//numbers2 will become a copy of numbers1

//C++ 11 allows initialization of a vector with a list of values like an array
vector<int> numbers { 10, 20, 30, 40 };
//No need for = operator


//Determining the size of a vector
numValues = set.size();
//In this statement, assume numValues is an int, and set is a vector. After the statement executes, numValues will contain the number of elements in set.

//Size member function is useful when writing functions that accept vectors as arguments. For example,
void showValues(vector<int> vect){
    for(int count = 0; count < vect.size(); count++)
    cout << vect[count] << endl;
}

//Some vector member functions

at(element) //Returns the value of the element located at element in the vector
//example
x = vect.at(5);//assigns the value of the fifth element to x

clear() //clears a vector from all elements
//example
vect.clear();//removes all elements from vect

empty() //returns true if vectory is empty, otherwise returns false
//example
if (vect.empty())
    cout << "Vector is empty";//will display if vect is empty

pop_back() //removes the last element from the vector
//example
vect.pop_back();//removes last element vect, reducing size by 1

push_back(value)//stores value in the last element of the vector. If vector is full or empty, a new element is created
//example
vect.push_back(7);//this statement stores 7 in the last element of vect

resize(elements, value)//resizes a vector by elements. Each of the new elements is initialized with the value in value
//example
vect.resize(5, 1)//increases the size of vect by five elements, all initialized to 1

swap(vecto2)//swaps contents of the vector with contents of vector2
//example
vect1.swap(vect2);//swaps contents

