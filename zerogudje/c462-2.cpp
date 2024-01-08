#include<bits/stdc++.h>
using namespace std;

int k, ans = 0;
string atoz;
vector<int>segment;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> atoz;
    int total = 1;
    for(int i = 1; i < atoz.size(); i++) {
        if(isupper(atoz[i]) == isupper(atoz[i-1])) {
            total++;

        }else {
            segment.push_back(total);
            total = 1;

        }

    }
    if(total) {
        segment.push_back(total);

    }
    total = -1;

    for(int i = 0; i < segment.size(); i++) {
        if(segment[i] == k) {
            if(total == -1) {
                total = i;

            }else {
                continue;

            }

        }else {
            if(total == -1) {
                continue;

            }else {
                int c = i - total;
                if(segment[i] > k) {
                    c++;

                }
                if(total != 0 && segment[total-1] > k) {
                    c++;

                }
                ans = max(ans, c);
                total = -1;

            }

        }

    }

    if (total != -1) {
        int c = segment.size() - total;
        if(total != 0 && segment[total-1] > k) {
            c++;

        }
        ans = max(ans, c);

    }

    cout << ans*k;

    return 0;
        
}