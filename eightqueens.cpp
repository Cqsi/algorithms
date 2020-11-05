#include <bits/stdc++.h> 

#define ll long long

const int n = 8; // size of chess board (n x n)
int column[n];
int diag1[2*n-1];
int diag2[2*n-1];

ll count = 0;

void search(int y) {
    if (y == n) {
        count++;
        return;
    }   
    for (int x = 0; x < n; x++) {
        if (column[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}


int main(){
    search(0);
    std::cout << count;
    return 0;
}