#include <iostream>
using namespace std;

int main(void){
    int y;
    while (cin >> y)
    {
    int a;
    a = y%4;
    int b;
    b = y%100;
    int c;
    c = y%400;
    if(a==0 and b!=0){
        cout << "閏年";
    }else if(c==0){
        cout << "閏年";
    }else{
        cout << "平年";
    }
    cout << "\n" ;    
    }     
    return 0;
}