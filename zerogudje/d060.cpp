#include<bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;
    if(m > 25) {
        cout << 60 - m + 25;

    }else {
        cout << 25 - m;

    }
    return 0;
    
}