#include<bits/stdc++.h>
using namespace std;

int main() {
    string s0;
    int A = 0, B = 0;
    cin >> s0;
    for(int i = 0; i < s0.length(); i++) {
        (i%2) ? A = A + s0[i]-'0' : B = B + s0[i]-'0';

    }
    cout << abs(A - B);

}