#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int x[n];
    int t;
    

    int i = 1;
    int j = n;
    for(int l = 1 ;l <= n ;l++ ) {
        cin >> x[l];

    }
    cin >> t ;

    if(t == 1) {
        while(i < n){
            if(x[i] < x[i+1] ) {
                break;

            }
            i++;

        }
        
        cout << i ;
        
    }else if(t == n) {
        while(j < 0) {
            if(x[j] < x[j-1] ) {
                cout << j ;
                break;

            }
            j--;

        }
        
    }else {
        for(int k = 1 ;k <= n ;k++ ) {

            // cout << t << endl; 

            if(t == 1) {
                break;

            }
            if(t == n) {
                break;

            }

            if(( x[t-1] < x[t+1] ) && (x[t] >= x[t-1])) {
                t--;
                if( ( x[t] == x[t+1] ) && x[t] < x[t-1] ) {
                    break;

                }

            }else if( ( x[t-1] > x[t+1] ) && (x[t] >= x[t+1] )) {
                t++;
                if( ( x[t] == x[t-1] ) && x[t] < x[t+1] ) {
                    break;
                    
                }

            }
        }
       
        cout << t; 
        


    }


    
    return 0;
}