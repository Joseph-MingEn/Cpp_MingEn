#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int day[n][3];
    int ans[n][10001];
    int on[n][1] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> day[i][j];

        }

    }
    for(int i = 0; i < n; i++) {
        int in = day[i][1] - day[i][0] ;
        int t = 0;

        for(int f = 1; f < in; f++) {
            if( ((day[i][0] + f) % day[i][2]) != 0 ) {
                // cout << "day[i][0] + f : " << (day[i][0] + f) << ", day[i][2] : " << day[i][2] << endl;

                ans[i][t] = (day[i][0] + f);
                t++;
                on[i][0]++;

            }

        }
        ans[i][1001] = t;
    }

    for(int i = 0; i < n; i++) {
        if(on[i][0] == 0) {
            cout << "No free parking spaces.";
        }else {
            for(int h = 0 ; h < ans[i][1001]; h++) {
                cout << ans[i][h] << ' ';

            }
        }
        cout << '\n';

    }
    return 0;
    
}