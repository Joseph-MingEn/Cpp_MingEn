#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    char c;
    cin >> n >> m;
    cin >> c;
    unsigned long long s, mask;
    /*
    ���i�H��int �n��unsigned
    because 
    int ���d��: -2147483648 ~ 2147483647
    unsigned long long ���d��: 0 ~ 18,446,744,073,709,551,615
    */
    while(n--) {
        mask = (unsigned long long)1 << (m-1);
        //mask�B�n (unsigned long long)1�ର�G�i�쭺����1
        cin >> s;
        for(int i = 0; i < m; i++) {
            cout << (s&mask ? c: '.') << ' ';
            // ���ߪ���cout c �����ߪ���cout .
            mask >>= 1;
            // mask �V�k���ʤ@��

        }
        cout << '\n';

    }
    return 0;

}