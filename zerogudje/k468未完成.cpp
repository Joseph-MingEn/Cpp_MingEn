#include <bits/stdc++.h>
using namespace std;

int main() {
    int n[3]; //�ؼЧ�
    for(int i = 0; i < 3; i++) {
        cin >> n[i];

    }
    int s[n[0]]; // �йv
    int target = 0; // �йv��
    int count = 0; //  ����
    int recode;
    int c1 = 1;
    int h = 0; // �֦�
    int com = 0;
    int s1[n[0]];
    while(cin >> s[target]) {
        target++;

    }
    //cout << "=========================================";
    recode = s[0];
    while(1) {
            for(int j = 0; j < target; j++) {
                if(n[2] == s[j]) {
                    // cout << "n:" << n[2] << " s" << s[j] << endl;
                    h++;

                }

            }

        // cout << "h:" << h << endl;
        if(h == 0) {
            cout << count;
            break;

        }else {
            h = 0;

        }
        for(int i = 0; i < target; i++) {
            if(recode == s[i]) {
                s1[com] = i;
                com++;

            }
        }
        if(com >= 1) {
            count++;
            s[s1[0]] = -1;
            s[s1[1]] = -1;
            com = 0;


        }else {
            com = 0;

        }
        recode = s[c1];
        if(recode == -1) {
            while(1) {
                if(recode == -1) {
                    c1++;
                    recode = s[c1];

                }
                if(recode != -1) {
                    break;

                }

            }

        }
    }
    return 0;

}