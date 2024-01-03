#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int dice[n][6], action[m], num[m], tump;
    for(int i = 0; i < m; i++) {
        cin >> num[i] >> action[i];

    }
    for(int i = 0; i < n; i++) {
        dice[i][0] = 1;
        dice[i][1] = 2;
        dice[i][2] = 3;
        dice[i][3] = 4;
        dice[i][4] = 5;
        dice[i][5] = 6;

    }
    /*
    for(int i = 0; i < m; i++) {
        cout << "num:" << num[i] << " ac:" << action[i] << endl;

    }
    */
    for(int i = 0; i < m; i++) {
        if(action[i] == -1) {
            tump = dice[num[i]-1][0];
            dice[num[i]-1][0] = dice[num[i]-1][2];
            dice[num[i]-1][2] = dice[num[i]-1][5];
            dice[num[i]-1][5] = dice[num[i]-1][3];
            dice[num[i]-1][3] = tump;
            // cout << dice[num[i]-1][0] << " ac:" << action[i];
            
        }else if(action[i] == -2) {
            tump = dice[num[i]-1][0];
            dice[num[i]-1][0] = dice[num[i]-1][4];
            dice[num[i]-1][4] = dice[num[i]-1][5];
            dice[num[i]-1][5] = dice[num[i]-1][1];
            dice[num[i]-1][1] = tump;
            // cout << dice[num[i]-1][0] << " ac:" << action[i];

        }else {
            for(int j = 0; j < 6; j++) {
            swap(dice[num[i]-1][j], dice[action[i]-1][j]);

            }

        }

    }
    for(int i = 0; i < n; i++) {
        cout << dice[i][0] << " ";

    }
    
    return 0;

}