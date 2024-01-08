#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n, j;
    cin >> a >> b;
    cin >> n;
    int N[n][100];
    int A = 0;
    int B = 0;
    j = 0;
    int total = 0;
    for(int i = 0;i < n; i++) {
        while(1) {
            cin >> N[i][j];
            if(N[i][j] == a || N[i][j] == -a) {
                A = A + N[i][j];

            }
            if(N[i][j] == b || N[i][j] == -b) {
                B = B + N[i][j];

            }
            if(N[i][j] == 0) {
                if(A > 0 && B > 0) {
                    total++;

                }
                A = 0;
                B = 0;
                j = 0;
                break;

            }
            j++;

        }
    }
    cout << total;
    
    return 0;

}