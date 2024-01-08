#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, d;
    int m = 0;
    cin >> n;
    int t[n], s[n];
    int max = -10000;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> t[i] >> s[i];
        if(s[i] > max) {
            max = s[i];
            d = t[i];

        }
        if(s[i] == -1) {
            count = count + s[i];
            m++;

        }

    }
    a = max - n - m*2;
    if(a < 0) {
        a = 0;

    }
    cout << a << " " << d;

    return 0;

}