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
            cout << "�榡���~�A�A�L���O�K�C��" << '\n' << "�Э��s��J:";
            int j;
            cin >> j;
            return Case(j);
        }
}
int main(){
    int ans = 0;
    char c = 'y';
    while(c == 'y' || c == 'Y'){
        cout << "�аݭn�I�X���\(1:���J��, 2:������, 3:�j���J, 4:�l����):";
        cin >> ans;
        int price = Case(ans);
        cout << "�ݭn" << price << "��" << '\n' << "�٭n�~���I�\��?(y/n):";
        cin >> c;       

    }
}