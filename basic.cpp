// In this file you can find a lot of basic competitive programming stuff in C++, I made it because I forget things easily

using namespace std; // you don't have to type out "std" each time

// include all standard libraries
// useful in competitive programming, not in software engineering
#include <bits/stdc++.h>

#define ll long long // just type "ll" instead of "long long"
#define ar array // ar instead of array

int main() {

    int num; 
    //cin >> num; // input
    //cout << "Hello World!\n"; // output

    int n = 3, m = 5;
    cout << n << " " << m << "\n"; // print two variables separated by space

    // int m1 = max(n, m); // maximum
    // int m2 = min(n, m); // minimum

    ll big_number; // define a long long using our shortcut

    // for loop
    int iter = 10;
    for(int i = 0; i < iter; i++){
        cout << i;
    }
    cout << "\n";
    // loop trough characters in string
    string s1 = "ADBCDADB";
    for (char d : s1){
        cout << d;
    }
    cout << "\n";
    // and = &&, if = ||, not = !    



    // ARRAYS AND VECTORS

    // vector 
    vector<int> v;
    v.push_back(3); // add elements
    v.push_back(4);
    cout << v.size(); // size of vector
    

    return 0; // end of program
}