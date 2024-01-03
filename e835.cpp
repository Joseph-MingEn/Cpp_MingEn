#include <bits/stdc++.h>
using namespace std;
 
int main(void) {
    int n;
    cin >> n;
    int a1 = 0;
    int a2 = 0;
    int a3 = 0;
    // ®y¦ì°Ï
    if(n < 2501) {
        a1 = 1;

    }else if(n > 7500) {
        a1 = 3;

    }else {
        a1 = 2;

    }
    if(a1 == 1) {
        a2 = n/25 + 1;
      
        a3 = n%25;

        if(a3 == 0) {
            a3 = 25;
            a2 = a2 - 1;

        }
    }
    if(a1 == 2) {
        n = n-2500;
        
        a2 = n/50 + 1;
     
        a3 = n%50;

        if(a3 == 0) {
            a3 = 50;
            a2 = a2 - 1;

        }
    }
    if(a1 == 3) {
        n = n-7500;
        
        a2 = n/25 + 1;
     
        a3 = n%25;

        if(a3 == 0) {
            a3 = 25;
            a2 = a2 - 1;

        }
    }

    cout << a1 << " " << a2 << " " << a3 ;
    return 0;
}