#include <bits/stdc++.h>
using namespace std;

#define ll long long


// Very naive solution, O(n^3)
int n_3(vector<int> v){
    int best = 0;
    int n = v.size();

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int s = 0;
            for(int k = i; k < j+1; k++){
                s+=v[k];
            }
            best = max(best, s);
        }
    }

    return best;
}


// Efficient solution, O(n^2)
int n_2(vector<int> v){
    int best = 0;
    int n = v.size();

    for(int i = 0; i < n; i++){
        int s = 0;
        for(int j = i; j < n; j++){
            s+=v[j];
            best = max(best, s);
        }
    }

    return best;
}


// Best solution, O(n)
int n_1(vector<int> v){
    int best = 0;
    int n = v.size();
    int s = 0;

    for (int i = 0; i < n; i++){
        s = max(v[i], s+v[i]);
        best = max(best, s);
    }
    

    return best;
}



int main(){

    vector<int> v = {-1, 2, 4, -3, 5, 2, -5, 2};

    cout << n_1(v);
    return 0;
}