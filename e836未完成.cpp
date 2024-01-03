#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n1 = n;
    long long r[n];
    long long a;
    int p = 1;
    int t = 0;
    long long image[n];
    int q = 0;
    int w = 0;
    for(long long  i = 0; i < n; i++) {
        cin >> r[i];

    }
    a = r[w];
    // for(int i = 0; i < n; i++) {
    //     cout << r[i] << " ";

    // }
    // cout << endl;
    for(int j = 0; j < n1; j++) {
        while(1) {
            if(p >= n) {
                break;

            }
            // cout << "p:" << p << endl;
            // cout << a << " " << r[p] << endl;
            if(a == r[p] && q == 0) {
                t++;
                // cout << p << " wasd " << t << endl;
                image[t] = r[p];
                q++;

            }
            p++;

        }
        // cout << "w " << w << endl;
        w++;
        a = r[w];
        p = w + 1;
        q = 0;

    }
    if(t == 0) {
        cout << n1 << endl;
        cout << "NO";
    }else {
        cout << n1 - t << endl;
        for(int i = 0; i < t; i++) {
            
            if(image[i] != image[i + 1]) {
                cout << image[i+1] << " " ;

            }
            
        }

    }
    return 0;
}