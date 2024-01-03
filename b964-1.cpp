#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int s;
    cin >> s;
    int g[s];
    for(int i = 0 ;i < s ;i++ ) {
        cin >> g[i];

    }
    sort(g,g+s);

    for(int i = 0 ;i < s ;i++ ) {
        if(i+1 < s){
        cout << g[i] << " ";

        }else {
            cout << g[i] << endl ;
        }

    }
    int max = -10;
    int min = 110;
    for(int i = 0 ;i < s ;i++ ) {
        if(g[i] >= 60) {
            if(g[i] < min) {
                min = g[i] ;

            }

        }
        if(g[i] < 60) {
            if(g[i] > max) {
                max = g[i] ;

            }

        }
    }

    if(max == -10){
        cout << "best case" << endl;

    }else {
        cout << max << endl;

    }

    if(min == 110){
        cout << "worst case" << endl;

    }else {
        cout << min << endl;

    }

    return 0;
}