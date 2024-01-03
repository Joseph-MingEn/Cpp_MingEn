#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int x,y;
    vector<pair<int, int>> dots;
    int i;
    pair<int, int> d;

    cin >> n;
    while(n--) {
        cin >> x >> y;
        dots.push_back({x, y});

    }
    sort(dots.begin(), dots.end());

    for(i = 0; i <dots.size(); i++) {
        d = dots[i];
        cout << d.first << " " << d.second << endl;
        
    }
    return 0;
    
}