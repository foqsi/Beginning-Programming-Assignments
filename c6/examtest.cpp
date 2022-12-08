#include <iostream>
using namespace std;

int main()
{
int season = 3;

switch(season){

  case 1:
     cout << "I dream of spring..." << endl;
     break;
  case 2:
     cout << "Summer is here!" << endl;
     break;
  case 3:
     cout << "Forever autumn..." << endl;
     break;
  case 4:
     cout << "Winter is coming..." << endl;
     break;
  default:
     cout << "Unknown Season!" << endl;
}
}