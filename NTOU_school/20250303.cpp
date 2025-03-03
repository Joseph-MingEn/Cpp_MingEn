#include <bits/stdc++.h>
using namespace std;

int Case(int i) {
    switch (i) {
        case 1:
            return 101;
        
        case 2:
            return 129;
        
        case 3:
            return 119;
        
        case 4:
            return 139;
        default:
            cout << "格式錯誤，你他媽是八七嗎" << '\n' << "請重新輸入:";
            int j;
            cin >> j;
            return Case(j);
        }
}
int main(){
    int ans = 0;
    char c = 'y';
    while(c == 'y' || c == 'Y'){
        cout << "請問要點幾號餐(1:麥克雞, 2:麥脆雞, 3:大麥克, 4:勁辣雞):";
        cin >> ans;
        int price = Case(ans);
        cout << "需要" << price << "元" << '\n' << "還要繼續點餐嗎?(y/n):";
        cin >> c;       

    }
}