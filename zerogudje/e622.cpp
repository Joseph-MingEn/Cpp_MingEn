#include <bits/stdc++.h>
using namespace std;
int main(){
// set
    int n ,s ;
    cin >> n >> s ;
    int st = 0;
    st = s/1000 ;
    int cp[n] ;
    int iv[n] ;
    int t[n] ;
    int tt[n];

// run
    for(int i = 0 ;i < n ; i++ ) {
        cin >> cp[i] >> iv[i] ;
        if(iv[i] < 30) {
           tt[i] = t[i] = cp [i] + st*10 ;

        }else if(iv[i] > 29 && iv[i] < 40) {
            tt[i] = t[i] = cp[i] + st*50;

        }else if(iv[i] > 39) {
            tt[i] = t[i] = cp[i] + st*100;

        }

    }
    /*
    for(int i = 0 ;i < n ;i++ ) {
        cout << t[i] << endl ;
    }
    for(int i = 0 ;i < n ;i++ ) {
        cout << tt[i] << endl ;
    }
    */
    for(int i = 0 ;i < n ;i++ ) {
        for(int j = i+1 ;j < n ;j++ ){
            int tmp;
            if(t[j] > t[i] ){
            tmp = t[i] ;
            t[i] = t[j] ;
            t[j] = tmp ;

            }
        }
    }
    for(int i = 0 ;i < n ;i++ ) {
        if(t[0] == tt[i]) {
            cout << i+1 << " " << tt[i] ;
        }
    }


    return 0;
}