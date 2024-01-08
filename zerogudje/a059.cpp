#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t ;
    cin >> t ;
    int x[t] ;
    int y[t] ;
    int m = 1;
    int m2 = 1;
    int count = 0;
    for(int i = 0 ;i < t ;i++ ) {
        cin >> x[i] ;
        cin >> y[i] ;

    }
    for(int i = 0 ;i < t ;i++ ) {
        // cout << x[i] << "," << y[i] << endl ;

        for(int j = 0 ;j < y[i] - x[i] ;j++ ){
            // cout << "j: " << j << " m2: " << m2 << endl ;

            if( m2 >= x[i] && y[i] >= m2 ) {
                // cout << "m2: " << m2 << endl;

                count = count + m2 ;
                m++;
                m2 = m*m;

            }else {
                m++;
                m2 = m*m;

            }

        }
        cout <<"Case " << i+1 << ": "<< count << endl ;
        // cout << '\n' ;
        count = 0;
        m = 0;
        m2 = 0;

    }
    return 0;
}