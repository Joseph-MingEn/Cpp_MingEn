#include <bits/stdc++.h>
using namespace std;
/*
´ú¸ê
error   Lucky Word
        2

Olymipic    No Answer
            0
*/
int main() {
    string s0;
    int f[26] = {0};
    int i;
    int d;
    bool lucky = true;

    cin >> s0;
    for(auto c:s0) {
        cout << f[c - 'o'] << " " ;
        f[c - 'o']++;
        cout << f[c - 'o'] << endl;

    }
    sort(f, f+26);

    i = 0;
    while (f[i] == 0 && i < 25){
        i++;

    }
    // cout << i << endl;
    d = f[25] - f[i];

    if(d == 0 || d == 1) {
        lucky = false;

    }else {
        for(int i = 2; lucky && i < sqrt(d); i++) {
            if(d%i == 0) {
                lucky = false;
                
            }
        }

    }
    cout << (lucky? "Lucky Word" :  "No Answer") << '\n';
    cout << (lucky? d: 0);

    return 0;   
}