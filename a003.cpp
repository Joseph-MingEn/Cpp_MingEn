#include <iostream>
using namespace std;

int main(void)
{
    int M,D,S;
    cin >> M >> D ;
    S = (M*2+D)%3 ;
    if(S == 0){
        cout << "´¶³q" ;
    }else if(S == 1){
        cout  << "¦N" ;
    }else if(S == 2){
        cout << "¤j¦N" ;
    }
    return 0;
}