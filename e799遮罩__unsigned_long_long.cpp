#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    char c;
    cin >> n >> m;
    cin >> c;
    unsigned long long s, mask;
    /*
    不可以用int 要用unsigned
    because 
    int 的範圍: -2147483648 ~ 2147483647
    unsigned long long 的範圍: 0 ~ 18,446,744,073,709,551,615
    */
    while(n--) {
        mask = (unsigned long long)1 << (m-1);
        //mask遮罩 (unsigned long long)1轉為二進位首項為1
        cin >> s;
        for(int i = 0; i < m; i++) {
            cout << (s&mask ? c: '.') << ' ';
            // 成立的話cout c 不成立的話cout .
            mask >>= 1;
            // mask 向右移動一格

        }
        cout << '\n';

    }
    return 0;

}