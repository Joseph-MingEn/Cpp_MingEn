#include <bits/stdc++.h>
using namespace std;

//¦³switch&case
int main() {
    int n;
    int a,b,c,d;

    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> n) {
        for(int i = 0; i < n; i++) {
            cin >> a >> b >> c >> d;
            switch (a*8+b*4+c*2+d){
                case 5:
                    cout << "A";
                    break;
                case 7:
                    cout << "B";
                    break;
                case 2:
                    cout << "C";
                    break;
                case 13:
                    cout << "D";
                    break;
                case 8:
                    cout << "E";
                    break;
                case 12:
                    cout << "F";
                    break;

            }
        }
        cout <<'\n';
    }
    return 0;

}