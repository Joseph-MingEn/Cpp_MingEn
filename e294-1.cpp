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
            // �ѫe(��)�V��(�k)���Ĥ@�Ӱ���
            if (!((n[i] - '0') % 2))
                break;
        }

        if (i == n.length()) {  // �����N�O�����_��
            cout << 0 << '\n';
            continue;
        }

        even = i;  // �̥��䰸�ƪ���m

        // ��U�@�ӧ����_��
        n_next = n;
        n_next[even] += 1;  // +1
        // �Ĥ@�Ӱ��ƫ᭱�C�@�Ӧ�Ƭҧאּ 1
        for (i = even + 1; i < n_next.length(); i++) {
            n_next[i] = '1';
        }

        // ��W�@�ӧ����_��
        // cout << "even:" << even << " i:" << i << endl;
        n_pre = n;

        if (n_pre[even] != '0') {
            n_pre[even] -= 1;  // -1
            // cout << "n_pre[even] != '0'" << endl;
        }else {  // �ɦ� (even���䪺�Ʀr�Ҭ��_��)
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
        // �Ĥ@�Ӱ��ƫ᭱�C�@�Ӧ�Ƭҧאּ 9
        for (i = even + 1; i < n_pre.length(); i++) {
            // cout << "i3:" << i << endl;
            n_pre[i] = '9';
        }

        // stoll -- �N string �ন long long
        // �ϥ� atoll ���קK���X
        cout << min(atoll(n_next.c_str()) - atoll(n.c_str()),
                    atoll(n.c_str()) - atoll(n_pre.c_str()))
             << '\n';
    }

    return 0;
}
