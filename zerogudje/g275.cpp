#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n ;
    cin >> n;
    int l[7];
    int r[7];
    int s[n];
    int A = 0;
    int B = 0;
    int C = 0;
    int a = 0;
    for(int i = 0 ;i < n ;i++ ) {
        for(int k = 0 ;k < 7 ;k++ ) {
        cin >> l[k] ;

        }
        for(int k = 0 ;k < 7 ;k++ ) {
        cin >> r[k] ;

        }

        if(l[1] != l[5] || l[1] == l[3] || r[1] != r[5] || r[1] == r[3]) {
            s[i] = 0; //a
            a++;

        }

        if(l[6] != 1 || r[6] != 0) {
            s[i] = 3; //b
            a++;

        }

        if(l[1] == r[1] || l[3] == r[3] || l[5] == r[5]) {
            s[i] = 5; //c
            a++;

        }

        if( (l[6] != 1 || r[6] != 0 ) && (l[1] != l[5] || l[1] == l[3] || r[1] != r[5] || r[1] == r[3]) ) {
            s[i] = 1;  //ab
            a++;

        }

        if( (l[1] == r[1] || l[3] == r[3] || l[5] == r[5] ) && ( l[6] != 1 || r[6] != 0 ) ) {
            s[i] = 4; //bc
            a++;

        }

        if( (l[1] == r[1] || l[3] == r[3] || l[5] == r[5] ) && ( l[1] != l[5] || l[1] == l[3] || r[1] != r[5] || r[1] == r[3] ) ) {
            s[i] = 7; //ac
            a++;

        }

        if( (l[1] == r[1] || l[3] == r[3] || l[5] == r[5] ) && ( l[6] != 1 || r[6] != 0 ) && ( l[1] != l[5] || l[1] == l[3] || r[1] != r[5] || r[1] == r[3] ) ) {
            s[i] = 2;  //abc
            a++;

        }

        if(a == 0) {
            s[i] = 6;  //none
        }
        a = 0;
    }
    for(int i = 0 ;i < n ;i++ ) {
        if(s[i] == 0) {
            cout << "A" << endl;
        }
        if(s[i] == 1) {
            cout << "AB" << endl;
        }
        if(s[i] == 2) {
            cout << "ABC" << endl;
        }
        if(s[i] == 3) {
            cout << "B" << endl;
        }
        if(s[i] == 4) {
            cout << "BC" << endl;
        }
        if(s[i] == 5) {
            cout << "C" << endl;
        }
        if(s[i] == 6) {
            cout << "None" << endl;
        }
        if(s[i] == 7) {
            cout << "AC" << endl;
        }
    }
    return 0;
}