#include <bits/stdc++.h>
using namespace std;

int main() {
    int monster;
    int power;
    cin >> monster >> power;
    int m_power[monster];
    for(int i = 0; i < monster; i++) {
        cin >> m_power[i];

    }
    int j = 0;
    while(1) {
        if(m_power[j] >= power) {
            cout << power;
            break;
        }else {
            power = power + m_power[j];
            j++ ;

        }
    }

    return 0;

}