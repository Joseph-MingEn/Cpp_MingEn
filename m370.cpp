#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int ld[n];
    int l = 0, r = 0;
    for(int i = 0; i < n; i++) {
        cin >> ld[i];

    }
    sort(ld, ld+n);
    for(int i = 0; i < n; i++) {
        if(ld[i] > x) {
            r++;

        }else {
            l++;

        }

    }

    if(r > l) {
        cout << r << " " << ld[n-1];

    }else {
        cout << l << " " << ld[0];

    }

    return 0;
    
}