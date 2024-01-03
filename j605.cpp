    #include <iostream>
    using namespace std;

    int main(void){
        int n;
        int i;
        int t,s;
        int max=-2;
        int f=0;
        int a;
        int b;
        cin >> n;
        for(i=0;i<n;i++){
            cin >> t >> s;
            if(s==-1){
                f++;
            }
            if(s>max){
                max=s;
                b=t;
            }
        }
        a=max-n-f*2;
        if(a<0){
            a=0;
        }
        cout << a << " " << b ;
    }