#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, n, m, r;
    cin >> s >> t >> n >> m >> r;
    int a[s][t], b[n][m];
    int a_c = 0, b_c =0, min = INT_MAX;
    int total = 0, mis = 0;
    bool Certification;
    Certification = false;
    for(int i = 0; i < s; i++) {
        for(int j = 0; j < t; j++) {
            cin >> a[i][j];
            a_c = a_c + a[i][j];

        }

    }
    /*
    for(int i = 0; i < s; i++) {
        for(int j = 0; j < t; j++) {
            cout << a[i][j] << " ";

        }
        cout << endl;
        cout << "a_c:"<< a_c << endl;

    }
    */
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> b[i][j];
            
        }

    }
    /*
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << b[i][j] << " ";

        }
        cout << endl;

    }
    */
    for(int i = 0; i < n-s+1; i++) {
        // cout << "i:" << i << " "; 
        for(int j = 0; j < m-t+1; j++) {
            // cout << "j:" << j << " " << endl; 
            for(int x = 0; x < s; x++) {
                for(int y = 0; y < t; y++) {
                    b_c = b_c + b[i+x][j+y];
                    // cout << "B:" << b[i+x][j+y] << " A:" << a[x][y] << endl;

                    if(b[i+x][j+y] != a[x][y]) {
                        mis++;

                    }

                }

            }
            // cout << "mis:" << mis << endl;
            // cout << "b_c:"<< b_c << " ";
            if(mis <= r) {
                total++;
                Certification = true;

            }
            mis = 0;
            
            if(Certification == 1 && abs(a_c - b_c) < min) {
                min = abs(a_c - b_c);

            }
            Certification = false;
            b_c = 0;
        }
    }
    // cout << endl;
    cout << total << endl;
    if(min == INT_MAX) {
        cout << -1;

    }else {
        cout << min;

    }

    return 0;

}