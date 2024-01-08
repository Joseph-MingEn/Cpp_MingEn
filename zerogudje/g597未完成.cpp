#include <bits/stdc++.h>
using namespace std;

int unit[200002];
int t[200002];

int main() {
    int n, m;
    int lf, rt, u;
    int i;
    long long cost = 0;
    cin >> n >> m;

    while(m--) {
        cin >> lf >> rt >> u;
        unit[lf] += u; //®t¤À
        unit[rt+1] -= u;

    }
    for(i = 1; i <= n; i++ ) {
        unit[i] += unit[i-1];

    }
    sort(unit+1, unit+(n+1), greater<int>());

    for(i = 1; i <= n; i++) {
        cin >> t[i];

    }

    for(i = 1; i <= n; i++) {
        cost += t[i]*unit[i];

    }
    cout << cost << '\n';
    
    return 0;
}