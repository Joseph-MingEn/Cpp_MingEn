#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int high[n];
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> high[i];

    }
    if(high[0] == 0) {
        total = total + high[1];
        high[0] = high[1];

    }

    if(high[n - 1] == 0) {
        total = total + high[n - 2];
        high[n - 1] = high[n - 2];

    }
    for(int i = 0; i < n; i++) {
        if(high[i] == 0) {
            if(high[i + 1] > high[i - 1]) {
                total = total + high[i - 1];
                high[i] = high[i - 1];

            }else if(high[i + 1] <= high[i - 1]){    
                total = total + high[i + 1];
                high[i] = high[i + 1];

            }

        }
    }
    // for(int i = 0; i < n; i++) {
    //     cout << high[i] << " ";

    // }

    cout << total;

    return 0;

}