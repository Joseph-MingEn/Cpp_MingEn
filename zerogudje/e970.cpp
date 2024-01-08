#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n];
    int m1[10000];
    int mp;
    int mt = 0;
    int a = 0;
    for(int i = 0 ;i < n ;i++ ) {
        cin >> m[i];
// cout <<"i "<< m[i];

    }
// cout << endl ;

    for(int i = 0 ;i < n ;i++ ) {
        if( (i+1) % m[n-1] == 1 ) {
            m1[a] = i+1;
// cout << m1[a] << " ";
            mt = mt + m[i] ;
            a++;

        }

    }
// cout << endl ;
// cout << "mt: "<< mt << " " << "n: "<< n << endl ;
    mp = mt % n;
    if( mp == 0 ) {
        mp = n;

    }
    cout << mp << " " << m[ mp-1 ] ;
    return 0;
}