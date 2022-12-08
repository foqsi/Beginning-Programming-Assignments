#include <iostream>
#include <string>

using namespace std;

int main() {
    //Goal: create the same program without nested statements
    //What day of the week is it? if weekday,
    //if weekend,
    //YES morning, breakfast, coffee, clock in, work, lunch, clock out, shower, gym
    //NO time of day, eat, drink, 
    bool weekday;
    bool yes = 1, no = 0;
    string name, time_of_day, day_of_week;
    char morning;
    
    
    cout << "Hey, what is your name? ";
    cin >> name;
    cout << "Nice to meet you " << name << ". Tell me, what day of the week is it? ";
    cin >> day_of_week;
    cout << "I hope you're having a good " << day_of_week << "!" << endl;
    cout << "Answer yes/no questions with y or n.\n";
    cout << "Is it morning? ";
    cin >> morning;

    if (morning == 'y'){
        cout << "Good morning!" << endl;
        if (morning == 'y'){
            cout << "Did you get coffee? " << endl;
            char coffee;
            cin >> coffee;
            if (coffee == 'y'){
                cout << "Was it good? " << endl;
                char good;
                cin >> good;
                if (good == 'y'){
                    cout << "That's good to hear! Do you have to work today? " << endl;
                    char work;
                    cin >> work;
                    if (work == 'y'){
                        cout << "Did you clock in, yet? " << endl;
                        char clock_in;
                        cin >> clock_in;
                        if (clock_in == 'y'){
                            cout << "I hope you have a good day at work!";
                        }
                    }
                }
            }
        }
    }
}

        