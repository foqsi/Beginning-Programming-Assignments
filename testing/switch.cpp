#include<iostream>
using namespace std;

int main(){
    //do{ (cout << day) while{ >= Thursday, (cout << default)

    string dayofweek;
    int day = 0;

    cout << "Which day of the week is it?";
    cin >> dayofweek;
    int monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6, sunday = 7;
    dayofweek = day;
    switch (day) {
        case 1:
            cout << "Monday\n\n";
            break;
        case 2:
            cout << "Tuesday\n\n";
            break;
        case 3:
            cout << "Wednesday\n\n";
            break;
        case 4:
            cout << "Thursday, looking forward to the weekend!\n\n";
            break;
        case 5:
            cout << "Friday, looking forward to the weekend!\n\n";
            break;
        case 6:
            cout << "Saturday\n\n";
            break;
        case 7:
            cout << "Sunday\n\n";
            break;
        default:
            cout << "Looking forward to the weekend\n\n";
        
    }
for (int i = 0; i <= 10; i++) {
  if (i == 4) {
    continue; //skips and goes to next
  }
  if (i == 6) {
    break; //stops/exits loop
  }
  cout << i << "\n";
}
    return 0;
}