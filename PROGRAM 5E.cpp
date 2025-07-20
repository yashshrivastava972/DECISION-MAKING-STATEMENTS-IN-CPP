// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: A PROGRAM USING SWITCH-CASE & BREAK STATEMENT (Sport Selector using Switch-Case in C++) (EXPERIMENT 5E)

// CODE:

#include<iostream>
using namespace std;

int main()
{
    int choice;
    cout << "1) Cricket" << endl;
    cout << "2) Football" << endl;
    cout << "3) Badminton" << endl;
    cout << "4) Chess" << endl;
    cout << "5) Tennis" << endl;

    cout << endl << "Enter your choice of sport (1 to 5):" << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Cricket is a great team sport! Enjoy playing on the field.";
            break;
        case 2:
            cout << "Football is full of energy and team spirit. Have fun!";
            break;
        case 3:
            cout << "Badminton is awesome for agility. Smash it!";
            break;
        case 4:
            cout << "Chess is a mind game! Sharpen your strategies.";
            break;
        case 5:
            cout << "Tennis is fast and fun. Keep practicing those serves!";
            break;
        default:
            cout << "Oops! That option isn't available. Please choose from 1 to 5 only.";
            break;
    }

    return 0;
}

// OUTPUTS:

// (i):
// 1) Cricket
// 2) Football
// 3) Badminton
// 4) Chess
// 5) Tennis

// Enter your choice of sport (1 to 5):
// 3
// Badminton is awesome for agility. Smash it!

// (ii):
// 1) Cricket
// 2) Football
// 3) Badminton
// 4) Chess
// 5) Tennis

// Enter your choice of sport (1 to 5):
// 6
// Oops! That option isn't available. Please choose from 1 to 5 only.
