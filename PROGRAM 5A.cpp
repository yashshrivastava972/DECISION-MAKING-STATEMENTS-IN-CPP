// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CHECK WHETHER NUMBER IS EVEN OR ODD (EXPERIMENT: 5A)


// CODE: 

#include <iostream>
using namespace std;
int main() {
    int number;
    
    cout<<"ENTER THE NUMBER:";
    cin>>number;
    
    if(number%2 == 0) {
        cout<<number<<"IS EVEN."<<endl;
    }
    else {
        cout<<number<<"IS ODD."<<endl;
    }
    return 0;
}

// OUTPUT:

// ENTER THE NUMBER:4
// 4IS EVEN.
// ENTER THE NUMBER:7
// 7IS ODD.

