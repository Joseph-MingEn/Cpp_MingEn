#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int max = -10000;
    int min = 10000;
    int thing[n][3];
    int ave = 0;
    int aws = 0;
    int n1 = 0;
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < 3; i++) {
            cin >> thing[j][i];
            
        }

    }
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < 3; i++) {
            if(thing[j][i] > max) {
                max = thing[j][i];

            }
            if(thing[j][i] < min) {
                min = thing[j][i];
                
            }
            ave = ave + thing[j][i];
            
        } 
        // cout << max << ":" << min << endl;
        if((max - min) >= d) {
            aws = aws + ave/3;
            n1++;

        }
        max = -10000;
        min = 10000;
        ave = 0;


    }
    cout << n1 << " " << aws;

}