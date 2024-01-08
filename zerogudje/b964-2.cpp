#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int g[n];
    int max = -100;
    int min = 1000;
    for(int i = 0; i < n; i++) {
        cin >> g[i];
        if(g[i] >= 60 && min > g[i]) {
            min = g[i];

        }else if(g[i] < 60 && max < g[i]) {
            max = g[i];
            
        }

    }
    sort(g, g+n);
    for(int i = 0; i < n; i++) {
        cout << g[i] << " ";

    }
    cout << endl;
    if(max != -100) {
        cout << max << endl;

    }else {
        cout << "best case" << endl;

    }
    if(min != 1000) {
        cout << min << endl;

    }else {
        cout << "worst case";
        
    }
    return 0;

}