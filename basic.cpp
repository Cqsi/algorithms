// In this file you can find a lot of basic competitive programming stuff in C++, I made it because I forget things easily

using namespace std; // you don't have to type out "std" each time

// include all standard libraries
// useful in competitive programming, not in software engineering
#include <bits/stdc++.h>

#define ll long long // just type "ll" instead of "long long"
#define ar array // ar instead of array

int main() {

    int num; 
    cin >> num; // input
    cout << "Hello World!\n"; // output

    int n = 3, m = 5;
    cout << n << " " << m << "\n"; // print two variables separated by space

    ll big_number; // define a long long using our shortcut


    // loop trough characters in string
    string s1 = "ADBCDADB";
    for (char d : s1){
        cout << d;
    }

    return 0; // end of program
}