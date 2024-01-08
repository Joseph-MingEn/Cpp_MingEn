#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int no[3];
    int x = 0;
    cin >> n;

    for(int i = 0 ;i < 3 ;i++ ) {
        cin >> no[i];

    }
    for(int i = 0 ;i < 3 ; i++ ) {
        for(int j = i+1 ;j < 3 ;j++ ) {
            if( no[i] < no[j] ) {
                int tmp;
                tmp = no[i];
                no[i] = no[j];
                no[j] = tmp;
                 
            }

        }

    }
    // for(int i = 0 ;i < 3 ;i++ ){
    //     cout << no[i];

    // }
    cout << endl ;
    for(int i = n ;i > 0 ;i-- ) {
        if(i != no[x] ) {
            cout << "No. " << i << endl ;

        }else {
            x++;

        }
    }
    return 0;
}