// a collection of definitions that *might* be useful in competitive programming
// some of them might destroy the logic and readability in the program so idk
// https://codeforces.com/contest/8/submission/36760

#define ll long long 
#define size(arr) sizeof(arr)/sizeof(arr[0])
#define seti(v) set<int> uniques(v.begin(), v.end())
#define printv(v) for(auto i : v){cout << i;}

#define gcd(a,b) __gcd(a,b)

template<class T> inline vector<pair<T,int> > factorize(T n)//NOTES:factorize(
  {vector<pair<T,int> > R;for (T i=2;n>1;){if (n%i==0){int C=0;for (;n%i==0;C++,n/=i);R.push_back(make_pair(i,C));}
   i++;if (i>n/i) i=n;}if (n>1) R.push_back(make_pair(n,1));return R;}

template<class T> inline vector<T> primefactor(T n){
    vector<T> factors;
    while(n%2==0){
        factors.push_back
    }
}

// CONSTANTS
const double PI=acos(-1.0);