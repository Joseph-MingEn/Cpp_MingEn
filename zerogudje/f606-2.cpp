#include<bits/stdc++.h>
using namespace std;
int m, n, k, q[50+10][50+10], server[50+10], city[50+10][50+10];
int formula() {
    for(int i = 0; i < m; i++) for(int j = 0; j < m; j++) city[i][j] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            city[server[i]][j] = city[server[i]][j] + q[i][j];

        }

    }
    int ans = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i == j) {
                ans = ans + city[i][j];

            }else {
                if(city[i][j] <= 1000) {
                    ans = ans + city[i][j]*3;

                }else {
                    ans = ans + 3000 + (city[i][j] - 1000)*2;

                }

            }

        }

    }

    return ans;

}
int main() {
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> q[i][j];

        }

    }
    int ans = INT_MAX;
    while(k--) {
        for(int i = 0; i < n; i++) {
            cin >> server[i];

        }
        ans = min(ans, formula());

    }
    cout << ans;

    return 0;
}