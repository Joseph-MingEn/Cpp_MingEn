#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string N = to_string(n), K = to_string(k);

    if(n%k == 0) {
        cout << "YES" << endl;

    }else {
        for(int i = 0; i < N.size(); i++) {
            if(N[i] == K[0]) {
                cout << "YES" << endl;

                return 0;
            }
            
        }
        cout << "NO" << endl;
    }
    return 0;
}