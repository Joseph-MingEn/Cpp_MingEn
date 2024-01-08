#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x[n][m];
    int total = 0;
    int a = 0;
    bool frist;
    frist = true;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> x[i][j];

        }
        sort(x[i], x[i] + m);
        total = total + x[i][m-1];

    }
    cout << total << endl;
    for(int i = 0; i < n; i++) {
        if( total % x[i][m-1] == 0) {
            if(frist) {
                frist = false;
                cout << x[i][m-1];
                a++;

            }else {
                cout << " " << x[i][m-1];
                a++;

            }

        }

    }
    if(a == 0) {
        cout << "-1" ;

    }
    return 0;

}