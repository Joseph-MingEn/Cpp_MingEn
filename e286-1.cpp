#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n = 4;
    int l1[n] ;
    int l2[n] ;
    int r1[n] ;
    int r2[n] ;
    int count = 0;
    int rt1 = 0;
    int rt2 = 0;
    int lt1 = 0;
    int lt2 = 0;
    for(int i = 0 ;i < n ;i++ ) {
        cin >> l1[i];
        lt1 = lt1 + l1[i];

    }
    for(int i = 0 ;i < n ;i++ ) {
        cin >> r1[i];
        rt1 = rt1 + r1[i];

    }
    if(lt1 > rt1) {
        count++;

    }else if(lt1 < rt1) {
        count--;

    }
    for(int i = 0 ;i < n ;i++ ) {
        cin >> l2[i];
        lt2 = lt2 + l2[i];

    }
    for(int i = 0 ;i < n ;i++ ) {
        cin >> r2[i];
        rt2 = rt2 + r2[i];

    }
    
    if(lt2 > rt2) {
        count++;

    }else if(lt2 < rt2) {
        count--;

    }
    cout << lt1 << ":" << rt1 << endl;
    cout << lt2 << ":" << rt2 << endl;
    if(count > 0) {
        cout << "Win";

    }else if(count < 0) {
        cout << "Lose";

    }else {
        cout << "Tie";

    }

    return 0;
}