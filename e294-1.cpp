#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, n_next, n_pre;
    int i, even;

    //==========================
    ios::sync_with_stdio(0);
    cin.tie(0);
    //==========================

    while (cin >> n) {
        for (i = 0; i < n.length(); i++) {
            // パ玡(オ)()т材案计
            if (!((n[i] - '0') % 2))
                break;
        }

        if (i == n.length()) {  // セō碞琌Ч计
            cout << 0 << '\n';
            continue;
        }

        even = i;  // 程オ娩案计竚

        // тЧ计
        n_next = n;
        n_next[even] += 1;  // +1
        // 材案计–计э 1
        for (i = even + 1; i < n_next.length(); i++) {
            n_next[i] = '1';
        }

        // тЧ计
        // cout << "even:" << even << " i:" << i << endl;
        n_pre = n;

        if (n_pre[even] != '0') {
            n_pre[even] -= 1;  // -1
            // cout << "n_pre[even] != '0'" << endl;
        }else {  //  (evenオ娩计计)
            i = even;
            // cout << "even:" << even << " i:" << i << endl;
            while (1) {
                n_pre[i--] = '9';
                // cout << "i:" << i << " n_pre[i]"<< n_pre[i] << endl;
                if (i == 0) {
                    // cout << "i2:" << i << endl;
                    if (n_pre[i] != '1')
                        n_pre[i] -= 2;  // -2
                    else
                        n_pre[i] = '0';
                    break;
                } else {
                    if (n_pre[i] != '1') {
                        n_pre[i] -= 2;  // -2
                        break;
                    }

                }

            }

        }
        // 材案计–计э 9
        for (i = even + 1; i < n_pre.length(); i++) {
            // cout << "i3:" << i << endl;
            n_pre[i] = '9';
        }

        // stoll -- 盢 string 锣Θ long long
        // ㄏノ atoll ㄓ磷犯
        cout << min(atoll(n_next.c_str()) - atoll(n.c_str()),
                    atoll(n.c_str()) - atoll(n_pre.c_str()))
             << '\n';
    }

    return 0;
}
