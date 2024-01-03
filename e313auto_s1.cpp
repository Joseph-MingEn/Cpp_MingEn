#include <bits/stdc++.h>
using namespace std;
/* 
´ú¸ê
3
ABBCAAB
AABBACC
AAPPCCSS
*/
int main() {
    int n;
    cin >> n;
    string s0, s1;
    int d0 = 27;
    int d1 ;
    int count[26];
    for(int i = 0; i < n; i++) {
        cin >> s1 ;
        for(int j = 0; j < 26; j++) {
            count[j] = 0;

        }
        d1 = 0;
        for(auto c:s1) {
            cout << count[c - 'A'] << " " << endl;
            count[c-'A']++;
            // cout << "count "<<  count[c] << endl;
            cout << count[c - 'A'] << endl;

        }

        for(int j = 0; j < 26; j++) {
            count[j] && d1++;

        }
        if(d1 < d0 || (d1 == d0 && s1 < s0)) {
            d0 = d1;
            s0 = s1;

        }

    }
    cout << s0 << '\n';
    return 0;
}
