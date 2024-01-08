#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, S = 0, s = 0;
    cin >> n >> m;
    int arr[n][m], arr2[n];
    bool ok;
    bool space;
    space = false;
    ok = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];

        }

        sort(arr[i], arr[i]+m);

    }
    for(int i = 0; i < n; i++) {
        S = S + arr[i][m-1];
        arr2[i] = arr[i][m-1];

    }
    cout << S << endl;
    for(int i = 0; i < n; i++) {
        if(S % arr2[i] == 0) {
            if(s == 0) {
                cout << arr2[i];
            }else {
                cout << " " << arr2[i];

            }
            s++;
            ok = true;

        }

    }
    if(ok == false) {
        cout << "-1";

    }
    

}