#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    int d[n];
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];

    }
    int j = 1;
    for(int i = 0; i < n; i++) {
        if(j == n) {
            break;
            
        }
        d[count] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
        j++;
        count++;

    }
    sort(d, d+count);

    cout << d[count-1] << " " << d[0];

    return 0;

}