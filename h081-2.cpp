#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int a[n];
    int x, y;
    int m = 0;
    int total = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];

    }
    for(int i = 1; i < n; i++) {
        // cout << a[m] << endl;
        if(a[i] >= (a[m] + d) && (count == 0)) {
            // cout << "****" << endl;
            total = total + a[i] - a[m];
            // cout << total << endl;
            m = i;
            count++;

        }
        if(a[i] <= (a[m] - d) && (count == 1)) {
            // cout << "*" << endl;
            count--;
            m = i;

        }

    }

    cout << total;

    return 0;

}