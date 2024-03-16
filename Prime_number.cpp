#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n = 1000000;

    bool notprime [n+1] = {};
    notprime[0] = notprime[1] = true;
    for(int i = 2 ;i < n+1 ;i++ ) {
        if(!notprime[i]) {
            for(int j=2*i ;j < n+1 ;j = j+i) {
                notprime[j] = true;
            }
        }
    }

    for(int i = 0 ;i < n+1 ;i++) {
        if(!notprime[i]) {
            cout << i << " " ;
        }
    }
    return 0;
}