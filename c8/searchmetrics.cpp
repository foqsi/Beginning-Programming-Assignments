#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int binary_search(int [], int, int, int);
int linear_search(int [], int);

int main(){
    ifstream unsortedintegers;
    string fileName;
    cout << "Please enter file name: ";
    cin >> fileName;
    unsortedintegers.open(fileName);

    //create array and read file contents into array
    const int NUM = 100000;
    int array[NUM];
    if(!unsortedintegers)
        cout << "Unable to open unsorted integers...";
    else
        for(int i = 0; i < NUM; i++)
            unsortedintegers >> array[i];

    //prompt for search item
    int searchitem;
    cout << "Enter search item: ";
    cin >> searchitem;

    cout << "\nLinear search: " << linear_search(array, searchitem) << endl;
    cout << "\nBinary search: " << binary_search(array, 0, NUM, searchitem) << endl;
}
int linear_search(int array[], int searchitem){
    for (int i = 0; i < 100000; i++)
        if (array[i] == searchitem)
            // if element found then return position of element
            return i + 1;
        // else return size of array
        return 100000;
}
int binary_search(int array[], int low, int NUM, int searchitem){
    if (low > NUM)
        return 1;
    int mid = (low + NUM) / 2;
    if (array[mid] == searchitem)
        return 1;
    else if (array[mid] > searchitem)
        return 1 + binary_search(array, low, mid - 1, searchitem);
    else
        return 1 + binary_search(array, mid + 1, NUM, searchitem);
}