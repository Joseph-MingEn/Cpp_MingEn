#include <bits/stdc++.h>
using namespace std;

int F(int x);

int main() {
    int n;
    cin >> n;
    cout << F(n);

    return 0;
}

int F(int x) {
    if(x == 1) {
        return 1;
    }
    if(( x % 2 ) == 1){
        return F(x-1) + F(x+1);

    }else {
        return F(x/2);

    }
}