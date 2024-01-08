#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n = 3;
    int s[n];
    for(int i = 0 ;i < n ;i++ ) {
        cin >> s[i] ;
        
    }
    sort(s, s+n);
    
    for(int i = 0 ;i < n ;i++ ) {
        if(i+1 < n){
          cout << s[i] << " "; 

        }else {
          cout << s[i] << endl;

        }
    }
    
    int a = s[0] * s[0] ;
    int b = s[1] * s[1] ;
    int c = s[2] * s[2] ;


    if( s[0] + s[1] < s[2] ) {
        cout << "No" ;

    }

    if( s[0] + s[1] > s[2] ) {

    if( a + b < c) {
        cout << "Obtuse" ;

    }
    if( a + b == c) {
        cout << "Right" ;

    }
    if( a + b > c) {
        cout << "Acute" ;

    }
    } 

    return 0;
}