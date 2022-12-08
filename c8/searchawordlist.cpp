#include <iostream>
#include <fstream>
using namespace std;

int search(const int[], int, int);

int main(){
    int count = 0, value;
    const int NUMWORDS = 10000;
    string words[NUMWORDS];

    ifstream randomWordsFile;
    randomWordsFile.open("randomwords.txt");

    if(!randomWordsFile)
        cout << "Unable to open file: randomWordsFile";
    else{
        for(int i = 0; i < NUMWORDS; i++)
            getline(randomWordsFile, words[i]);
    }
    string word;
    ifstream searchFile;
    searchFile.open("searchwords.txt");
    if(!searchFile)
        cout << "Unable to open file: searchFile.";
    else {
        while(getline(searchFile, word)){
            bool found = false;
            for (int i = 0; i < NUMWORDS; i++){
                if(words[i] == word){
                    found = true;
                    break;
                }
            }
            if(found)
                count++;
        }
        cout << count << " words matched." << endl;
    }
    return 0;
}
