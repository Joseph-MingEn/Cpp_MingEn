#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, L[3];
    cin >> a >> b >> c;
    L[0] = a;
    L[1] = b;
    L[2] = c;
    sort(L, L+3);
    for(int i = 0; i < 3; i++) {
        cout << L[i] << " ";

    }
    cout << endl;
    if(L[0] + L[1] <= L[2]) {
        cout << "No";
    }else {
        if(L[0]*L[0] + L[1]*L[1] < L[2]*L[2]) {
            cout << "Obtuse";

        }
        if(L[0]*L[0] + L[1]*L[1] == L[2]*L[2]) {
            cout << "Right";
            
        }
        if(L[0]*L[0] + L[1]*L[1] > L[2]*L[2]) {
            cout << "Acute";
            
        }
    }
    return 0;

}