#include <bits/stdc++.h>
using namespace std;

int main() {
    double M[7];
    double tM = 0;
    double A[7];
    double tA = 0;
    double N[7];
    double tN = 0;
    double E[7];
    double tE = 0;
    double tt[4];
    double day[7]; 
    double max = -1;
    int maxi;
    double dmax = -1;
    int dmaxi;
    for(int i = 0; i < 7; i++) {
        cin >> M[i] >> A[i] >> N[i] >> E[i];
        day[i] = M[i] + A[i] + N[i] + E[i];
        tt[0] = tM = tM + M[i];
        tt[1] = tA = tA + A[i];
        tt[2] = tN = tN + N[i];
        tt[3] = tE = tE + E[i];

    }
    for(int i = 0; i < 7; i++) {
        if(max < day[i]) {
            max = day[i];
            maxi = i;

        }

    }
    for(int i = 0; i < 4; i++) {
        if(tt[i] > dmax) {
            dmax = tt[i];
            dmaxi = i;

        }

    }
    cout << maxi+1 << endl;
    if(dmaxi == 0) {
        cout << "morning";

    }else if(dmaxi == 1){
        cout << "afternoon";

    }else if(dmaxi == 2) {
        cout << "night";

    }else {
        cout << "early morning";

    }
    return 0;

}