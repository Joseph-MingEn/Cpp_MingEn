#include<bits/stdc++.h>
using namespace std;

int main() {
    string X;
    cin >> X;
    int A = 0;
    int B = 0;
    for(int i = 0; i < X.length(); i++) {
        if((i % 2) == 1) {
            A = A + X[i]-'0';

        }else {
            B = B + X[i]-'0';

        }

    }
    cout << abs(A - B);

    return 0;
    
}