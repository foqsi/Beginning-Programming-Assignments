#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){

    ifstream in;
    // Open file for reading data
    in.open("mixcasewords.txt");
    if(!in)
        cout << "Unable to open file.";

    string words[10000];
    int index = 0;
    string word, temp1, temp2;
    // Store data in array
    while(getline(in, word)){
        words[index++] = word;
    }
    // To sort the words lexicographically
    for(int i = 0; i < index; i++){
        for(int j = 0; j < index-i-1; j++){
            temp1 = words[j];
            temp2 = words[j+1];
            // To convert strings in lower case
            transform(temp1.begin(), temp1.end(), temp1.begin(), ::tolower);
            transform(temp2.begin(), temp2.end(), temp2.begin(), ::tolower);
            if(temp1 > temp2){
                word = words[j];
                words[j] = words[j+1];
                words[j+1] = word;
            }
        }
    }
    int ind;
    // Read index from user
    cout << "Enter the index: ";
    cin >> ind;
    // Check for valid index
    if(ind >= 0 && ind < index){
        cout << words[ind] << endl;
    }

    return 0;
}