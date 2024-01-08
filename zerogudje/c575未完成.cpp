#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n ,k ;
    cin >> n >> k;
    int p[100000];
    for(int i = 0 ;i < n ;i++ ) {
        cin >> p[i] ;

    }
    for(int i = 0 ;i < n ;i++ ) {
        for(int j = i+1 ;j < n ; j++){
            if(p[i] > p[j] ) {
                int tmp;
                tmp = p[j];
                p[j] = p[i];
                p[i] = tmp ;

            }

        }

        
    }
    int a = (p[n-1] - p[0] + 1) / k -1 ;
    cout << a ;

    return 0;

}