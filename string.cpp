#include<bits/stdc++.h>
using namespace std;

int main() {
    string s0;

    cin >> s0;
    cout << s0 << '\n';
    cout << "s0.length()----------------------------" << '\n';
    cout << s0.length() << '\n';

    cout << "auto----------------------------" << '\n';
    for(auto c:s0) {
        cout << c << '\n';

    }
    return 0;
}