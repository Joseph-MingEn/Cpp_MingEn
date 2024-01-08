#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, as, bs;
    int bit, i;
    while(cin >> s) {
        for(i = 0; i < s.size(); i++) {
            if((s[i] - '0')%2 != 1) {
                break;

            }
            
        }
        if(i == s.size()) {
            cout << "0" << endl;
            continue;

        }
        bit = i;
        // as{
        as = s;
        as[bit]++;
        for(i = bit+1; i < as.size(); i++) {
            as[i] = '1';

        }
        // cout << "as:" << as << endl;
        // as}
        
        // bs{
        // cout << "bit:" << bit << " i:" << i << endl;
        bs = s;

        if(bs[bit] != '0') {
            bs[bit]--;
            // cout << "bs[bit] != '0'" << endl;

        }else {
            i = bit;
            // cout << "1 i:" << i << " bit"<< bit << endl;
            while(1) {
                bs[i] = '9';
                i--;
                // cout << "2 i:" << i << " bs[i]"<< bs[i] << endl;
                if(i == 0) {
                    if(bs[i] != '1') {
                        bs[i] = bs[i] - 2;
                        break;
                    }else {
                        bs[i] = '0';
                        // cout << "bs i:" << bs[i] << endl;
                        break;

                    }

                }else {
                    if(bs[i] != '1') {
                        bs[i] = bs[i] - 2;
                        break;

                    }

                }

            }

        }
        for(i = bit+1; i < bs.size(); i++) {
            bs[i] = '9';

        }
        // cout << bs << endl;
        // bs}

        long long int ans = LLONG_MAX;
        ans = min(abs(atoll(s.c_str()) - atoll(bs.c_str())), abs(atoll(s.c_str()) - atoll(as.c_str())));
        cout << ans << endl;

    }

    return 0;
}