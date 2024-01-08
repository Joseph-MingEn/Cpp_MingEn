#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n];
    int s2[n];
    int s3[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        s2[i] = s[i];

    }
    /*
    for(int i = 0; i < n; i++) {
        cout << s[i] << " ";

    }
    cout << endl;
    */
    int i1 = 0;
    int i2 = 0;
    int n1 = n ;
    while (n1--) {
        s3[i1] = s2[i1];
        // cout << s3[i1] << endl ;
        i1 = s3[i1];
        // cout << "i1: " << i1 << " i2: " << i2 <<endl ;
        if(i1 == i2) {
            total++;
            for(int i = 0; i < n; i++) {
                if(s3[i] != s[i]) {
                    // cout << " s3 : " << s[i] << endl ;
                    i2 = s[i];
                    i1 = i2;
                    break;

                }

            }

        }
        

    }
    
    cout << total << endl;
     
    return 0;
    
}