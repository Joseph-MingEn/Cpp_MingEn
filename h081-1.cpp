#include <iostream>
using namespace std;

int main(void){
    int n;
    int D;
    int m;
    cin >> n >> D ;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i] ;
        //cout << a[i] << " ";
    }
    int x = a[0],y = 0 , ans = 0;
    for(int i=1; i<n; i++){
        if(x != -1){
            if(a[i] - x >= D){
            ans += a[i] - x;
            x = -1 ;
            y = a[i];
            }
        }else{
                if(y - a[i] >= D){
                    x =a[i];
                }
            }
    }
    cout << ans << "\n";
    return 0;
    
}