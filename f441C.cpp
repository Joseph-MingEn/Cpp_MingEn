#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n ,s ;
    cin >> n >> s ;
    int a[n];
    for(int i = 0 ;i < n ;i++) {
        cin >> a[i] ;

    }
    int m ;
    cin >> m ;
    int c ;
    int t = 0 ;
    int total = 0 ;
    for(int i = 0 ;i < m ;i++) {
        for(int j = 0 ;j < n ;j++ ) {
            cin >> c;
                
            if(a[j] == c) {
                t++;

            }
        }
        total = t * s ;
        cout << total << endl ;
        total = 0;
        t = 0;
    }
    
    
}