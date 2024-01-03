#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, diff0 = 27, diff1, count[26];
    cin >> n;
    string s1;
    string s0;
    while(n--) {
        cin >> s1;
        for(int i = 0; i < 26; i++) {
            count[i] = 0;
            diff1 = 0;

        }
        for(auto c:s1) {
            count[c - 'A']++;

        }
        for(int i = 0; i < 26; i++) {
            count[i] && diff1++;

        }
        if(diff1 < diff0 || (diff1 == diff0 && s1 < s0)) {
            diff0 = diff1;
            s0 = s1;

        }

    }
    cout << s0;

    return 0;

}