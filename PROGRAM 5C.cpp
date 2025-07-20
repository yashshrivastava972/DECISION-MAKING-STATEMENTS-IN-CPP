// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FIND LARGEST NUMBER AMONG THREE NUMBERS USING NESTED IF-ELSE (EXPERIMENT 5C)

// CODE:

#include<iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "ENTER THE THREE NUMBERS: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << a << " IS THE LARAGEST NUMBER." << endl;
        } else {
            cout << c << " IS THE LARAGEST NUMBER." << endl;
        }
    } else {
        if (b > c) {
            cout << b << " IS THE LARAGEST NUMBER." << endl;
        } else {
            cout << c << " IS THE LARAGEST NUMBER." << endl;
        }
    }

    return 0;
}

// OUTPUTS:

// (i):
// ENTER THE THREE NUMBERS: 1
// 2
// 3
// 3 IS THE LARAGEST NUMBER.

// (ii):
// ENTER THE THREE NUMBERS: -4
// 0
// 1
// 1 IS THE LARAGEST NUMBER.





