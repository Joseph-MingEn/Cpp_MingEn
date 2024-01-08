#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define int long long int
#define a arr[i].F.F
#define b arr[i].F.S
#define c arr[i+1].F.F
#define d arr[i+1].F.S
int n, m;
vector<pair<pair<int,int>,pair<int,int>>>arr;//戰力，應變力，輸，編號
int s[1000], t[1000], id[1000];
vector<pair<pair<int, int>, pair<int, int>>>win;
vector<pair<pair<int, int>, pair<int, int>>>lose;
signed main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> s[i];

    }
    for(int i = 0; i < n; i++) {
        cin >> t[i];

    }
    for(int i = 0; i < n; i++) {
        cin >> id[i];

    }
    for(int i = 0; i < n; i++) {
        arr.push_back({{s[id[i]-1], t[id[i]-1]}, {0, id[i]}});

    }
    while(arr.size() > 1) {
        for(int i = 0; i+1 < arr.size(); i = i+2) {
            if(a*b >= c*d) {
                win.push_back({{a+c*d/2/b,b+c*d/2/a},{arr[i].S.F,arr[i].S.S}});
                lose.push_back({{c+c/2,d+d/2},{arr[i+1].S.F+1,arr[i+1].S.S}});

            }else {
                win.push_back({{c+a*b/2/d,d+a*b/2/c},{arr[i+1].S.F,arr[i+1].S.S}});
                lose.push_back({{a+a/2,b+b/2},{arr[i].S.F+1,arr[i].S.S}});
                
            }

        }
        if(arr.size()%2 == 1) {
            win.push_back(arr[arr.size()-1]);

        }
        arr.clear();
        for(int j = 0; j < win.size(); j++) {
            arr.push_back(win[j]);

        }
        win.clear();
        for(int j = 0; j < lose.size(); j++) {
            if(lose[j].S.F == m) {
                continue;

            }else {
                arr.push_back(lose[j]);

            }

        }
        lose.clear();

    }
    cout << arr[0].S.S;
}