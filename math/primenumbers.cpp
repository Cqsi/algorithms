#include <iostream>
#include <cmath>

using namespace std;

template<class T> inline string isPrime(T n){ int s = ceil(sqrt(n)); bool prime = true; for(int i = 2; i < s+1; i+=2){ if(n%i == 0){ prime = false; break; } if(i==2){ i--; } }return prime ? "true" : "false"; } 

int main(){

    cout << isPrime<long>(18235089217977777777) << "\n";
    return 0;
}