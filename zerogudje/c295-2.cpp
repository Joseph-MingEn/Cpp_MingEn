#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int xi[n][m];
    int total = 0;
    int S[m];
    int s[n];
    int count = 0;
    bool did;
    did = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> xi[i][j];

        }
        sort(xi[i], xi[i] + m);

    }
    for(int i = 0; i < n; i++) {
        total = total + xi[i][m-1];

    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            S[j] = xi[i][j];

        }
        sort(S, S+m, greater<int>());
        if(total % S[0] == 0) {
            s[count] = S[0];
            count++;
            
        }
        

    }
    
    cout << total << endl;
    if(count == 0) {
        cout << "-1";
    }else {
        for(int i = 0; i < count; i++) {
            if(i == 0) {
                cout << s[i];

            }else {
                cout << " " << s[i];

            }

        }

    }

    return 0;

}