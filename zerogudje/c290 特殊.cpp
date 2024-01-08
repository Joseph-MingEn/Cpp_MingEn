#include <bits/stdc++.h>
using namespace std;

int main(void){
    string x;
    cin >> x;
    int A = 0;
    int B = 0;
    int i;
    for(i = 0;i<x.length();i++){
        if( i % 2){
            A = A + x[i]-'0';
        }else{
            B = B + x[i]-'0';
        }
    }
    if(A>B){
        cout << A - B << endl;
    }else{
        cout << B - A << endl;
    }
    return 0;
}