#include <bits/stdc++.h>
using namespace std;
/*
¿é¥X
5
5 -4 1 -3 1
6
-1000 -1000 -1000 1000 1000 1000
0
*/
int main() {
    int n;

    while(cin >> n && n) {
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];

        }
        int count = 0;
        for(int i = 0; i < n; i++) {
            // cout << i << " " << abs(a[i]) << " " <<  count << endl ;
            count += abs(a[i]);
            // cout << count << endl;
            a[i+1] += a[i];

        }
        cout << count << '\n';

    }
    return 0;

}