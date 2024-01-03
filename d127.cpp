#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int l;
    while(cin >> l) {
        l = l/2;
        long long int ans = 0;
        for(long long int i = 1; i <= l; i++) {
            long long int m = l - i;

            ans = max(ans, i*m);

        }
        cout << ans << endl;
    }

    return 0;

}