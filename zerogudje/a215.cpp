#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
    int total = 0;
    int j = 0;
    int tt[100];
    int math = 0;
    while(cin >> n >> m) {
        while(1) {
            total = total + n ;
            math++;
            // cout << "total: " << total << endl;
            n++;
            if(total > m) {
                break;

            }

        }
        cout << math << endl;
        total = 0;
        math = 0;

    }
    return 0;

}