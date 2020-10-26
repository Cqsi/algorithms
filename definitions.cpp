// a collection of definitions that *might* be useful in competitive programming
// some of them might destroy the logic and readability in the program so idk
// https://codeforces.com/contest/8/submission/36760

#define ll long long 
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define seti(v) set<int> uniques(v.begin(), v.end())
#define printv(v) for(auto i : v){cout << i;}

#define gcd(a,b) __gcd(a,b)

// MATH
// divisors of number
template<class T> inline vector<T> divisors(T n){ vector<T> divs; for (int i = 1; i*i < n; i++) { if (n % i == 0){ divs.push_back(i); } } for (int i = sqrt(n); i >= 1; i--) { if (n % i == 0){ divs.push_back(n/i); } } return divs;}

// CONSTANTS
const double PI=acos(-1.0);