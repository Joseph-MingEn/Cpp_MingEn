#include<bits/stdc++.h>
using namespace std;

int main() {
    int r, c, k, b[10][10], a[10][10], m[10];

    while(cin >> r >> c >> k){

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> b[i][j];

            }

        }
        for(int i = 0; i < k; i++) {
            cin >> m[i];

        }

        while(k--) {
            if(m[k] == 1) {
                for(int i = 0, j = r-1; i < j; i++, j--) {
                    for(int l = 0; l < c; l++) {
                        swap(b[i][l], b[j][l]);
                        
                    }

                }

            }else {
                for(int i = 0; i < c; i++) {
                    for(int j = 0; j < r; j++) {
                        a[c-i-1][j] = b[j][i];

                    }

                }

                swap(r, c);
                
                for(int i = 0; i < r; i++) {
                    for(int j = 0; j < c; j++) {
                        b[i][j] = a[i][j];

                    }

                }

            }

        }

        cout << r << " " << c << '\n';
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(j == 0) {
                    cout << b[i][j];

                }else {
                    cout << " " << b[i][j];

                }

            }

            cout << endl;

        }

    }
    return 0;

}