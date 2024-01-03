#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a[50][50], x, total = 0, X[2500], Y[2500], count = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];

        }

    }
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            total = 0;
            x = a[i][j];
            for(int b = i-x; b <= i+x; b++) {
                if(b < 0 || b >= n) {
                    continue;

                }
                for(int d = j-x; d <= j+x; d++) {
                    if(d < 0 || d >= m) {
                        continue;

                    }
                    if(abs(i - b) + abs(j - d) <= x) {
                        total = total + a[b][d];

                    }

                }
            }
            if((total % 10) == x) {
                X[count] = i;
                Y[count] = j;
                count++;

            }

        }

    }
    cout << count << endl;
    for(int i = 0; i < count; i++) {
        cout << X[i] << " " << Y[i] << endl;

    }
    return 0;

}