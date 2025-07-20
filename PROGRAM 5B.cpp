// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CHECK WHETHER A CHARACTER IS VOWEL OR CONSONANT (EXPERIMENT: 5B)


// CODE:

#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "ENTER THE CHARACTER: ";
    cin >> character;

    // Check if the character is a vowel (both lowercase and uppercase)
    if (character == 'a' || character == 'e' || character == 'i' || 
        character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || 
        character == 'O' || character == 'U') {
        cout << "THE CHARACTER IS A VOWEL";
    } else {
        cout << "THE CHARACTER IS A CONSONANT";
    }

    return 0;
}
 
// OUTPUTS:

// (i):
// ENTER THE CHARACTER: e
// THE CHARACTER IS A VOWEL

// (ii):
// ENTER THE CHARACTER: Y
// THE CHARACTER IS A CONSONANT
