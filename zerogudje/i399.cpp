#include <iostream>
using namespace std;

int main(void){
    int a, b, c;
    int i;
    int p=0;
    int M=-1;
    int m=1000;
    cin >> a >> b >> c ;
    if(a==b && b==c){
        p=3;
    }else if(a==b||a==c||b==c){
        p=2;
    }else{
        p=1;
    }

    for(int i=0;i<10;i++){
    if(a<b){
        m=a;
        M=b;
        a=M;
        b=m;
    }
    if(b<c){
        m=b;
        M=c;
        b=M;
        c=m;
    }
    }
    if(a==b && b==c){
        cout << p << " " << a;
    }
    if(a == b and a != c){
        cout << p << " " << a << " " << c;
    }
    if(a != b and b == c){
        cout << p << " " << a << " " << b;
    }
    if(a != b and b != c){
        cout << p << " " << a << " " << b << " " << c;
    }
    return 0;
    }