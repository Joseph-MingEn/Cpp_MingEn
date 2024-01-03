#include <bits/stdc++.h>
using namespace std;

int main() {
    int a ,b;
    bool c;
    cin >> a >> b >> c;
    bool wasd;
    wasd = 0;
    if(a != 0 && a != 1) {
        a = 1;

    }
    if(b != 0 && a != 1) {
        b = 1;
        
    }
    if((a and b) == c) {
        wasd = 1;
        cout << "AND" << '\n';

    }
    if((a or b) == c) {
        wasd = 1;
        cout << "OR" << '\n';

    }
    if((a xor b) == c) {
        wasd = 1;
        cout << "XOR" << '\n';

    }
    if(wasd == 0) {
        cout << "IMPOSSIBLE";

    }

    return 0;

}