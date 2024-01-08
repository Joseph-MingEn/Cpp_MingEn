#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    int n;
    
    // 加速式必要
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            cin >> a >> b >> c >> d;
            switch (a*1000 + b*100 + c*10 + d) {
                case 101:
                    cout << "A";
                    break;
                case 111:
                    cout << "B";
                    break;
                case 10:
                    cout << "C";
                    break;
                case 1101:
                    cout << "D";
                    break;
                case 1000:
                    cout << "E";
                    break;
                
                case 1100:
                    cout << "F";
                    break;

            }

        }
        cout << '\n';

    }
    return 0;

}