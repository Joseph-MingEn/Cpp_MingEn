#include <bits/stdc++.h>
using namespace std;

int main() {
    long int a, b, c, n;
    cin >> n;
    for(int i = 0 ;i < n ;i++ ) {
        cin >> a >> b >> c;


        if(a == 1) {
            cout << b+c;
        }else if(a == 2) {
            cout << b-c;
        }else if(a == 3) {
            cout << b*c;
        }else if(a == 4) {
            cout << b/c ;
        }
        cout << endl;

    }
    
    return 0;
}