#include <bits/stdc++.h>
using namespace std;

int gcd(int p1, int p2) {
    if(p2 == 0) {
        return p1;

    }
    return gcd(p2, p1 % p2);

}

int main() {
    int x[2];
    for(int i = 0; i < 2; i++) {
        cin >> x[i];

    }
    sort(x, x+2);

    int lcm = x[0] * x[1];
    int agcd = gcd(x[0] , x[1]);

    cout << agcd << " " << lcm;

    return 0;

}