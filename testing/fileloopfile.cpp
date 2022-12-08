#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    int numberofdays;
    double sales;

    //Get number of days
    cout << "For how many days? ";
    cin >> numberofdays;

    //Open a file named sales.txt
    outputFile.open("C:\\Users\\DerWo\\Desktop\\sales.txt");

    //Get sales for each day and write to file
    for (int count = 1; count <= numberofdays; count++)
    {
        //get sales for a day
        cout << "Enter sales for day " << count << ": " << endl;
        cin >> sales;

        //write sales to file
        outputFile << sales << endl;
    }
    //close file
    outputFile.close();
    cout << "Data written to sales.txt";
    return 0;
}