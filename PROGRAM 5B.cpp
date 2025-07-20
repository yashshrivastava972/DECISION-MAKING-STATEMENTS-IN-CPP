// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CHECK WHETHER NUMBER IS EVEN OR ODD (EXPERIMENT: 5A)


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
 
// OUTPUT:

// ENTER THE CHARACTER: e
// THE CHARACTER IS A VOWEL

// ENTER THE CHARACTER: Y
// THE CHARACTER IS A CONSONANT
