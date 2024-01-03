#include <bits/stdc++.h>
using namespace std;

int main(void) {
// set
    int m ,n ;
    cin >> m >> n ;
    int lm[m] ,ln[n] ;
    int mt = 0;
    int nt = 0;
    for(int i = 0 ;i < m ;i++ ) {
        cin >> lm[i];
        mt = mt + lm[i];
    }
    for(int i = 0 ;i < n ;i++ ) {
        cin >> ln[i];
        nt = nt + ln[i];
    }
// run
    if(m > n && mt > nt) {
        cout << "Yes" ;
    }else {
        cout << "No" ;
    }
}