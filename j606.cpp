#include <bits/stdc++.h>
using namespace std;
char ans[25][25]; // 
int main(){
    int k, q, r;
    cin >> k >> q >> r;
    cin >> ans[0]; // ans[i][j] 紀錄第i次修改後 第j個字元是什麼
    for(int i = k;i >= 1;i--){ // 把原本的字串往後移變成 1-base
        ans[0][i] = ans[0][i-1];
        // cout << "ans1[0][" << i << "] = " << ans[0][i] << endl;
        
    }
    for(int i = 0;i < q;i++){
        for(int j = 1;j <= k;j++){
            int x; cin >> x;
            ans[i+1][x] = ans[i][j];
            // cout << "ans2[" << i+1 << "][" << x << "] = " << ans[i+1][x] << endl;

        }
    }
    /*
    for(int i = 0;i < k;i++){
        for(int j = 0;j <= q;j++){
            cout << ans[i][j] << " ";

        }
        cout << endl;

    }
    */
    for(int i = 1;i <= r;i++){
        for(int j = 1;j <= q;j++){
            cout << ans[j][i];
        }
        cout << '\n';
    }
}