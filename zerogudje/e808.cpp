#include <bits/stdc++.h>
using namespace std;
    int h, m;

int hm( int y);
int mh(int x);

int main() {
    int n;
    cin >> n;
    cin >> h >> m;
    int min[n];
    int count = 0;
    int m2;
    int pair[1001];
    int ad[1001] = {0};
    int mm = m;
    for(int i = 0; i < n; i++) {
        cin >> min[i];
        mm = mm + min[i];
        ad[i] = mm;

        // cout << ad[i] << endl;

    }
    while(1) {
        cin >> m2;
        if(m2 == 0) {
            break;

        }
        pair[count] =ad[m2-1];
        // cout << pair[count] << endl;
        count++;

    }
    // cout << "==========================" << endl;
    int cm;
    int ch;
    for(int i =  0; i < count; i++) {
        //cout << pair[i] << endl;
        // cm = m;
        ch = h;
        m = pair[i];
        if(m >= 60) {
            // cout << "m " << m << endl;
            m = hm(m);
            h = mh(h);

        }
        if(h > 9 && m > 9) {
            cout << h << ":" << m << endl ;

        }else if(h < 10 && m > 9){
            cout << "0" << h << ":" << m << endl ;

        }else if(h > 9 && m < 10) {
            cout << h << ":0" << m << endl ;

        }else {
            cout << "0" << h << ":0" << m << endl ;

        }
        // m = cm;
        h = ch;

    }
    return 0;

}

int hm(int y) {
    y = y - 60;
    h++;
    if(y >= 60) {
        return hm(y);

    }else {
        return y;

    }
}
int mh(int x) {
    if(x > 23) {
        x = x - 24;

    }
    if(x > 23) {
        return mh(x);

    }else {
        return x;
    }
    return x;
}