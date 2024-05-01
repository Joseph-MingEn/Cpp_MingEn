#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    int k;
    cin >> k;
    
    if(k != 0) {
        if( s % k != 0 ) {
        cout << s%k;

        }else {
        cout << "OK!";

        }
    }else if(k == 0) {
        cout << "OK!";
        
    }else {
        cout << "OK!";

    }

    return 0;

}