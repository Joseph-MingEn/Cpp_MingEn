#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m;
    int arr[n][m];
    int min = INT_MAX;
    int total = 0;
    bool B[n][m] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] < min) {
                min = arr[i][j];
                x = i;
                y = j;

            }

        }

    }

    B[x][y] = 1;
    total = total + arr[x][y];
    int path;
    while(1) {
        int activation = 0;
        min = INT_MAX;
        if(x != 0 && B[x-1][y] == 0 && arr[x-1][y] < min) {
            min = arr[x-1][y];
            activation++;
            path = 0;

        }
        if(y != 0 && B[x][y-1] == 0 && arr[x][y-1] < min) {
            min = arr[x][y-1];
            activation++;
            path = 1;

        }
        if(x != n-1 && B[x+1][y] == 0 && arr[x+1][y] < min) {
            min = arr[x+1][y];
            activation++;
            path = 2;

        }
        if(y != m-1 && B[x][y+1] == 0 && arr[x][y+1] < min) {
            min = arr[x][y+1];
            activation++;
            path = 3;

        }
        if(activation == 0) {
            break;

        }
        if(path == 0) {
            x--;

        }else if(path == 1) {
            y--;

        }else if(path == 2) {
            x++;

        }else if(path == 3) {
            y++;

        }
        total = total + arr[x][y];
        B[x][y] = 1;

    }

    cout << total;

    return 0;

}