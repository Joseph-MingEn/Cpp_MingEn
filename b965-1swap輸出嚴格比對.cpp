#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c, m;
    int i, j, k;
    bool first;
    int A[10][10], B[10][10], M[10]; //���D�N�]���̤j��

    //��J
    while (cin >> r >> c >> m) {
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                cin >> B[i][j];
            }
        }
        for (i = 0; i < m; i++) {
            cin >> M[i];
        }

        //�f�B��
        while (m--) {
            if (M[m]) { //½�઺�f�B��
                for (i = 0, j = r - 1; i < j; i++, j--) {
                    for (k = 0; k < c; k++) {
                        swap(B[i][k], B[j][k]);

                    }
                }
            } else { //(���઺�f�B��)�f�ɰw���� 90 ��
                for (j = 0; j < c; j++) {
                    i = (c - 1) - j; //B[x][j]->A[(c-1)-j][x]
                    for (k = 0; k < r; k++) {
                        A[i][k] = B[k][j];

                    }

                }
                swap(r, c);

                //�N A ���w�� B
                for (i = 0; i < r; i++) {
                    for (j = 0; j < c; j++) {
                        B[i][j] = A[i][j];

                    }

                }

            }

        }

        //��X (�Y����: �C�@�檺�̫�@�ӼƦr��õL�ť�)
        cout << r << " " << c << '\n';
        for (i = 0; i < r; i++) {
            first = true;
            for (j = 0; j < c; j++) {
                if (first) { //�C�@�檺�Ĥ@�ӼƦr�����[�ť�
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