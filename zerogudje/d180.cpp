#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int coin[n];
    for(int i=0;i<n;i++) {
        cin >> coin[i];
    }
    int l = 0, r = 0;
    for(int i=0; i<n; i = i+2) {
        l = l + coin[i];
        r = r + coin[i+1];

    }

    if(l > r) {
        cout << "left" << endl;
    }else {
        cout << "right" << endl;
        
    }
    
    return 0;
}