#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, ans = 0;
    const int MAX_SIZE = 1001;
    int map[MAX_SIZE][MAX_SIZE], boom[MAX_SIZE][MAX_SIZE], bboom[MAX_SIZE][MAX_SIZE];
    int r[500], c[500], s[500], t[500];
    cin >> n >> m >> k;
    int boss = k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            map[i][j] = 0;
            boom[i][j] = 0;
            bboom[i][j] = 0;

        }

    }
    for(int i = 0; i < k; i++) {
        cin >> r[i] >> c[i] >> s[i] >> t[i];
        map[r[i]][c[i]] = 1;

    }
    while(1) {
        for(int i = 0; i < k; i++) {
            map[r[i]][c[i]] = 0;
            boom[r[i]][c[i]]++;
            bboom[r[i]][c[i]]++;
            r[i] = r[i] + s[i];
            c[i] = c[i] + t[i];

        }
        for(int i = 0; i < k; i++) {
            if ((r[i] > n || r[i] < 0 || c[i] > m || c[i] < 0 || boom[r[i]][c[i]] != 0) && r[i] != 1000 && c[i] != 1000) {
                bboom[r[i]][c[i]] = 0;
                boss--;
                r[i] = 1000;
                c[i] = 1000;
                s[i] = 0;
                c[i] = 0;

            }
            map[r[i]][c[i]] = 1;

        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                boom[i][j] = bboom[i][j];

            }

        }
        if(boss == 0) {
            break;

        }
        
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(boom[i][j] != 0) {
                ans++;

            }

        }

    }
    cout << ans;

    return 0;

}