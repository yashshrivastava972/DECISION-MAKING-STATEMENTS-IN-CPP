// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CALCULATOR PROGRAM USING SWITCH-CASE & BREAK STATEMENT (EXPERIMENT 5D)

// CODE:

#include <iostream>
using namespace std;

int main() {
    char option;
    int num1, num2;
    cout << "ENTER TWO OPERANDS: ";
    cin >> num1 >> num2;
    
    cout << "ENTER AN OPERATOR (+, -, *, /): ";
    cin >> option;
    
    switch(option) {
        case '+':
            cout << "RESULT = " << num1 + num2;
            break;
            
        case '-':
            cout << "RESULT = " << num1 - num2;
            break;
            
        case '*':
            cout << "RESULT = " << num1 * num2;
            break;
            
        case '/':
            if(num2 != 0)
                cout << "RESULT = " << num1 / num2;
            else
                cout << "ERROR! DIVISION BY ZERO.";
            break;
            
        default:
            cout << "ERROR! OPERATOR IS NOT CORRECT.";
            break;
    }

    return 0;
}


// OUTPUT:

// ENTER TWO OPERANDS: 2
// 3
// ENTER AN OPERATOR (+, -, *, /): +
// RESULT = 5

// ENTER TWO OPERANDS: 2
// 3
// ENTER AN OPERATOR (+, -, *, /): $
// ERROR! OPERATOR IS NOT CORRECT.




