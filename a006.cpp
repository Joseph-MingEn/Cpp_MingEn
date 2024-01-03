#include <iostream>
#include <math.h>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c ;
    int x;
    int x1, x2;
    int m;
    int d;
    d = sqrt(b*b-4*a*c);
    x1 = ((-1*b + d)/(2*a));
    x2 = ((-1*b - d)/(2*a));
    if(d==0){
        cout << "Two same roots x=" << x1 ;
    }else if(d>0){
            cout << "Two different roots " << "x1="  << x1 << " , " << "x2=" << x2 ; 
    }else{
        cout << "No real root" ;
    }
    return 0;
}
