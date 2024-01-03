#include<bits/stdc++.h>
using namespace std;

int k, ans = 0;
string s;
vector<int>segnames;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> s;
    int tmp = 1;

    for(int i = 1; i < s.size(); i++) {
        if(isupper(s[i]) == isupper(s[i-1])) {
            tmp++;

        }else {
            segnames.push_back(tmp);
            tmp = 1;

        }

    }

    if(tmp) {
        segnames.push_back(tmp);

    }
    tmp = -1;

    for(int i = 0; i < segnames.size(); i++) {
        if(segnames[i] == k) {
            if(tmp == -1) {
                tmp = i;

            }else {
                continue;

            }

        }else {
            if(tmp == -1) {
                continue;

            }else {
                int num = i - tmp;
                if(segnames[i] > k) {
                    num++;

                }
                if(tmp != 0 && segnames[tmp-1] > k) {
                    num++;

                }
                ans = max(ans, num);
                tmp = -1;

            }

        }

    }
    
    if(tmp != -1) {
        // cout << "size:" << segnames.size() << " tmp:" << tmp << endl;
        int num = segnames.size() - tmp;

        if(tmp != 0 && segnames[tmp-1] > k) {
            num++;

        }
        ans = max(ans, num);

    }

    cout << ans*k;

    return 0;

}