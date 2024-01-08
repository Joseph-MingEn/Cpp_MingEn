#include <bits/stdc++.h>
using namespace std;

int main(void) {
// set
    int x1;
    int y1;
    int lv1;
    int r1;
    cin >> x1 >> y1 >> lv1 >> r1 ;
    int rt = r1*r1;
    int n;
    cin >> n;
    int x[n] ,y[n] ,lv[n] ;
    for(int i = 0 ;i < n ;i++ ) {
        cin >> x[i] >> y[i] >> lv[i] ;
    }
    int k = 0;
// run
    for(int i = 0 ;i < n ;i++ ) {
        int r2 = (x1 - x[i])*(x1 - x[i]) + ((y1 - y[i])*(y1 - y[i]) );
        if(lv1 >= lv[i]) {
            if( r2 <= rt ) {
                k++;
            }
        }
    }
    cout << k;
    return 0;
}
