// SOLUTION TO https://cses.fi/dt/task/328/
// If we were to use a vector (or list in python) we would allocate to much memory, because we would have to set up the vector for ALL values, whether or not they will pop up in the input. Instead by using a map with key/value pairs, we only store input.'

// Simple problem, but this is where I realized how freaking useful maps are

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n,m;
	cin >> n >> m;
	
	map<ll, int> ma;
	for(int i = 0; i < m; i++){
		string s;
		ll x;
		cin >> s >> x;

		if(s == "?"){
			if(ma[x] == 1){
				cout << "10-4" << "\n";
			}else{
				cout << "QAQ"<< "\n";
			}
		}else{
			if(s == "+"){
				ma[x] = 1;
			}else{
				ma[x] = 0;
			}
		}	
	}

}
