#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n ,d ;
    cin >> n >> d ;
    int s[3];
    int total = 0;
    int h = 0;
    int t = 0;
    for(int i = 0 ;i < n ;i++ ) {
        for(int j = 0 ;j < 3 ;j++ ){
            cin >> s[j];
        }
        sort(s, s+3);

        if((s[2] - s[0]) >= d ) {
            t = (s[2] + s[1] + s[0])/3;
            total = total + t;
            h++;
        } 

    }
    cout << h << " " << total ;

    return 0;   
}