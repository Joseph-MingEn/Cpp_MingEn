#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, m, M;
    int n;
    int cycle, t;

    while(cin >> i >> j) {
        m = min(i, j);
        M = max(i, j);
        
        cycle = 0;
        for(int k = m; k < M; k++) {
            n = k;
            t = 0;
            while(1) { // while(1)µL½a´`Àô
                t++;
                
                if(n == 1) {
                    break;

                }
                if(n%2) {
                    n = n * 3 + 1;

                }else {
                    n = n / 2;
                }

            }
            cycle = max(cycle, t);
            
        }
        cout << i << " " << j << " " << cycle << '\n'; 

    }
    return 0;

}