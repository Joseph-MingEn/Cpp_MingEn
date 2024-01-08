#include <bits/stdc++.h>
using namespace std;
/*
測資
10 28 2
*/

int main() {
    // e起高 s求高 a耐性
    int e ,s ,a ;
    cin >> e >> s >> a ;
    int day = 1;
    
    while(a) {
        
        if(e >= s) {
            cout << day;
            break;

        }
        day++;
        if(!(day % 10 == 0 || day % 10 == 1) || day == 0) {
            if((day - 1) % 3 == 0) {
                e = e + e/3;

            }else {
                e = e + e/10;

            }

        }else if(day % 10 == 0){
            a--;

        }
        
    }
    if(a == 0) {
        cout << "unsalable";
        
    }
}