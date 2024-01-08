#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int vi[n];
    int vit[n];
    vit[0] = 0;
    int m = 0;
    int total = 0;
    int in = 0;
    int rem = 0;
    int x = 0;
    for(int i = 0; i < n; i++) {
        cin >> vi[i];
        total = total + vi[i];

    }
    sort(vi, vi+n);
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int tmp;
            tmp = vi[i];
            vi[i] = vi[j];
            vi[j] = tmp;

        }
    }

    int ave = total / 3;

    if((total % 3) != 0 || ave < vi[0] ) {
        cout << "NO" ;

    }else {
        for(int i = 0; i < n; i++) {
            for(int j = 0;  vit[i] = ave; j++) {
                if(j < n) {
                    break;

                }
                if(ave > vit [i] + vi[j]){
                    vit[i] = vit [i] + vi[j];
                    cout << j << " " << vit[i] << " ";

                }

            }
            
            if(vit[i] > ave || vit[i] < ave) {
                cout << vi[i] << ' ' << ave <<' '<< "NO";
                break;

            }

        }
        for(int i = 0; i < n; i++) {
            if(vit[i] > ave) {
                in++;

            }

        }
        for(int i = 0; i < n; i++) {
            if(vit[i] != ave) {
                x++;
            }
        }
        if(in == 0 && x == 0) {
            cout << "YES";

        }else if(in == 0 && x != 0) {
            cout << "NO";
        }

    }
    
    
    

    return 0;
}