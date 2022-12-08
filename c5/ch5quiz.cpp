#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    
    ifstream    textFile;
    string      first,
                last,
                filename;

    cout << "File name: ";
    cin >> filename;

    textFile.open(filename);
    while (!textFile)
    {
        cout << "Error: Cannot open file. Try entering the filename again: ";
        cin >> filename;
        textFile.open(filename);
    }
    string currentLine;
    getline(textFile, currentLine);
    first = last = currentLine;    
    for (int i = 1; i < 194431; ++i)
    {
        getline(textFile, currentLine);
        if(currentLine < first)
            first = currentLine;
        if(currentLine > last)
            last = currentLine;
    }
    cout << first << endl;
    cout << last << endl;   

    textFile.close();
    return 0;
}