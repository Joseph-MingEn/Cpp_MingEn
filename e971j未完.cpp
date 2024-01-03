#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int block[m][n];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> block[i][j];

        }

    }
    for(int j = 1; j < n-1; j++) {
        for(int i = 1; i < m-1; i++) {
            int block_u = block[i-1][j];
            int block_t = block[i][j];
            int block_d = block[i+1][j];
            if (block_u == 1 && block_d == 1) {
                block[i][j] = 1;

            }

        }

    }
    for(int i = 1; i < m-1; i++) {
        for(int j = 1; j < n-1; j++) {
            int block_u = block[i][j-1];
            int block_t = block[i][j];
            int block_d = block[i][j+1];
            if (block_u == 1 && block_d == 1) {
                block[i][j] = 1;

            }

        }

    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << block[i][j] << " ";

        }
        cout << endl;

    }


    return 0;
}