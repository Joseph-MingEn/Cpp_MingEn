#include <bits/stdc++.h>
using namespace std;

// BMR(�k) = (13.7���魫(kg)) + (5.0�Ѩ���(cm)) - (6.8�Ѧ~��) + 66
double BMR_M(double a1,double h1,double w1);
// BMR(�k) = (9.6���魫(kg)) + (1.8�Ѩ���(cm)) - (4.7�Ѧ~��) + 655
double BMR_W(double a0,double h0,double w0);
int main() {
    int n;
    cin >> n;
    double g,a,h,w;
    double BMR[n];
    for(int i = 0; i < n; i++) {
        cin >> g >> a >> h >> w;
        if(g == 1) {
            BMR[i] = BMR_M(a, h, w);

        }else {
            BMR[i] = BMR_W(a, h, w);

        }

    }
    for(int i = 0; i < n; i++) {
        cout << fixed << setprecision(2) << BMR[i] << endl;

    }
    return 0;
}
double BMR_M(double a1,double h1,double w1) {
    return (w1*13.7) + (h1*5) - (a1*6.8) + 66 ;

}

double BMR_W(double a0,double h0,double w0) {
    return w0*9.6 + h0*1.8 - a0*4.7 + 655;

}
