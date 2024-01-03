#include <iostream>
using namespace std;

int main(void){
    int a,b,c,d,e,t;
    cin >> t ;
    cout << "\n" ;
    for(t ; t>0 && t<20 ; t--){
        cin >> a >> b >> c >> d;
        if((b-a)==(d-c)){
            e = d+(d-c);
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }else if((b/a)==(d/c)){
            e = d*(b/a);
            cout << a << " " << b << " " << c << " " << d << " " << e << endl;
        }else{
            cout << "error";
        }
    }
    return 0;
}