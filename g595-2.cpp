#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> h[i];

    }
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            if(h[i] == 0) {
                total = total + h[i+1];
                h[i] = h[i+1];

            }
        }else if(i == (n-1)) {
            if(h[i] == 0) {
                total = total + h[i-1];
                h[i] = h[i-1];
                
            }
        }
        if(h[i] == 0) {
            if(h[i] < h[i+1] && h[i] < h[i-1]) {
                if(h[i-1] > h[i+1]) {
                    total = total + h[i+1];
                    h[i] = h[i+1];

                }else {
                    total = total + h[i-1];
                    h[i] = h[i-1];

                }
            }

        }

    }
    cout << total;
    return 0;

} 