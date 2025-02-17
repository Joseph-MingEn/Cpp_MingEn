#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    long long int i, j;

    while(cin >> i >> j) {
        cout << i << '\t' << j << '\n';
        swap(i, j);
        cout << i << '\t' << j << '\n';

    }

    return 0;

}