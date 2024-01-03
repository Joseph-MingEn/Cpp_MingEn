#include <iostream>
using namespace std;

int main(void){
    int n;
    int i, x,y;
    int M=-1;
    int m=1000;
    int e,f;
    int g,h;
    int a,b;
    int w;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x >> y;
        if(i >= 1){
            a=e-x;
            b=f-y;
            if(a<0){
                a=a*-1;
            }
            if(b<0){
                b=b*-1;
            }
            w=a+b;
            if(w>M){
                M=w;
            }
            if(w<m){
                m=w;
            }
        }
        e=x;
        f=y;
    }
    cout << M << " " << m ;
}