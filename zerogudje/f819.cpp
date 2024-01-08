#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >>  N;
    int S[N];
    int D[N];
    int num[N];
    num[0] = 0; 
    int over[N];
    over[0] = -1;
    int j = 0;
    int total = 0;
    for(int i = 0; i < N; i++) {
        cin >> S[i] >> D[i] ;
        if(D[i] > 100) {
            num[j] = S[i];
            over[j] = (D[i] - 100);
            j++;

        }

    }
    
    if(over[j] == -1) {
        cout << '0';
    }else if(over[j] != -1) {
        sort(num, num+j);
        for(int i = 0; i < j; i++) {
            cout << num[i] << ' ' ;
            total = total + over[i];
            
        }
        cout << endl <<  total*5 ;

    }

    return 0;
}