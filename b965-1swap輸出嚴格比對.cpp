#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, m;
    int i, j, k;
    bool first;
    int A[10][10], B[10][10], M[10]; //依題意設成最大值

    //輸入
    while (cin >> r >> c >> m) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cin >> B[i][j];
            }
        }
        for (i = 0; i < m; i++) {
            cin >> M[i];
        }

        //逆運算
        while (m--) {
            if (M[m]) { //翻轉的逆運算
                for (i = 0, j = r - 1; i < j; i++, j--) {
                    for (k = 0; k < c; k++) {
                        swap(B[i][k], B[j][k]);

                    }
                }
            } else { //(旋轉的逆運算)逆時針旋轉 90 度
                for (j = 0; j < c; j++) {
                    i = (c - 1) - j; //B[x][j]->A[(c-1)-j][x]
                    for (k = 0; k < r; k++) {
                        A[i][k] = B[k][j];

                    }

                }
                swap(r, c);

                //將 A 指定給 B
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        B[i][j] = A[i][j];

                    }

                }

            }

        }

        //輸出 (嚴格比對: 每一行的最後一個數字後並無空白)
        cout << r << " " << c << '\n';
        for (i = 0; i < r; i++) {
            first = true;
            for (j = 0; j < c; j++) {
                if (first) { //每一行的第一個數字不須加空白
                    first = false;

                } else {
                    cout << " ";

                }
                cout << B[i][j];

            }
            cout << '\n';

        }

    }
    return 0;

}