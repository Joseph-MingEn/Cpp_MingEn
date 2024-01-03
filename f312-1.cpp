#include<bits/stdc++.h>
using namespace std;
int main() {
    int a1, b1, c1;
    int a2, b2, c2;
    int n, total;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cin >> n;
    int max = -1000000000;
    int y1, y2;
    int i1;
    for(int i = 0; i <= n; i++) {
        i1 = n - i;
        // cout << "i :" << i << endl; 
        // cout << "i1 :" << i1 << endl; 
        y1 = a1*i*i + b1*i + c1;
        y2 = a2*i1*i1 + b2*i1 + c2;

        // cout << y1 << ":" << y2 << endl;
        if(max < (y1 + y2)) {
            max = y1 + y2;

        }

    }
    cout << max;
    
    return 0;

}