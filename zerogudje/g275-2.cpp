#include<bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        int p1[n][7], p2[n][7];
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 7; j++) {
                cin >> p1[i][j];

            }
            for(int j = 0; j < 7; j++) {
                cin >> p2[i][j];

            }
            
        }
        for(int i = 0; i < n; i++) {
            if(p1[i][1] == p1[i][3] || p1[i][5] == p1[i][3] || p1[i][1] != p1[i][5]) {
                a++;

            }
            if(p2[i][1] == p2[i][3] || p2[i][5] == p2[i][3] || p2[i][1] != p2[i][5]) {
                a++;

            }
            if(p1[i][6] != 1 || p2[i][6] != 0) {
                b++;

            }
            if(p1[i][1] == p2[i][1] || p1[i][5] == p2[i][5] || p1[i][3] == p2[i][3]) {
                c++;

            }
            if(a != 0) {
                cout << "A";

            }
            if(b != 0) {
                cout << "B";

            }
            if(c != 0) {
                cout << "C";

            }
            if(a == 0 && b == 0 && c == 0) {
                cout << "None";

            }
            a = 0;
            b = 0;
            c = 0;
            cout << endl;
            
        }

    return 0;

}