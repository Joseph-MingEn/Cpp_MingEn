#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, c, m;
    int i, j ,k;
    int a[10][10], b[10][10], M[10];

    while(cin >> r >> c >> m) {
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                cin >> b[i][j];

            }

        }
        for(i = 0; i < m; i++) {
            cin >> M[i];

        }

        while(m--) {
            if(M[m] == 1) {
                for(i = 0, j = r - 1; i < j; i++, j--) { 
                    for(k = 0; k < c; k++) {
                        swap(b[i][k], b[j][k]);

                    }

                }

            }else {
                for(j = 0; j < c; j++) {
                    i = (c - 1) - j;
                    for(int k = 0; k < r; k++) {
                        a[i][k] = b[k][j];

                    }

                }
                swap(r, c);

                for(i = 0; i < r; i++) {
                    for(j = 0; j < c; j++) {
                        b[i][j] = a[i][j];

                    }

                }

            }
            
        }
        cout << r << " " << c << '\n';
        for(i = 0; i < r; i++) {
            for(j = 0; j < c; j++) {
                if(j == 0) {
                    cout << b[i][j];

                }else {
                    cout << " " << b[i][j];

                }

            }
            cout << '\n';

        }

    }
    return 0;

}