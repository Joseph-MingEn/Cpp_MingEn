#include <bits/stdc++.h>
using namespace std;

int abc(int a);
int main() {
    int n;
    cin >> n;
    int ab = n/4;
    int b = 1;
    int c;
    int i = 1;
    while(1) {
        c = abc(i);
        if(ab <= c) {
            if(ab < c) {
                i--;
            }
           //cout << i << ' ';
            break;

        }
        i++;

    }
    int d = n - abc(i)*4;
    //cout << abc(i)*4 << ' ';
    //cout << d << ' ';
    int e = abs(d / i);
    //cout << e;
    if(d == 0) {
        cout << "Pineapple pen";

    }else if(((d%i == 0 || d%i == 1) && e == 1) || e == 0) {
     cout << "Pen";

    }else if((d%i == 0 && e == 2) || e == 1) {
     cout << "Pineapple";

    }else if(((d%i == 0 || d%i == 2) && e == 3) || e == 2){
     cout << "Apple";

    }else {
    cout << "Pineapple pen";

    }
    return 0;

}

int abc(int a) {
    if(a == 0 || a == 1) {
        return 1;

    }else {
        return a + abc(a - 1);

    }
}
