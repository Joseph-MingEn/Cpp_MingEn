    #include <bits/stdc++.h>
    using namespace std;

    int main(void) {
        int w;
        cin >> w ;
        int n;
        cin >> n ;
        int m = n + 1 ;
        int p[n];
        int a ;
        int tmp ;
        int count = 0;
        for(int i = 0 ;i < n ;i++ ) {
            cin >> p[i];

        }
        sort(p, p+n);

/*
        for(int i = 0 ;i < n ;i++ ) {
            for(int j = i+1 ;j < n+1 ;j++) {
                if(p[i] > p[j]){
                    tmp = p[i];
                    p[i] = p[j];
                    p[j] = tmp;

                }
            }
        }
*/
        int L = 0;
        int R = n-1;
        while(L<=R){
            count++;
            if(p[L]+p[R] <= w){ //¿ï¨â­Ó
            L++;
            R--;
            }else R--; 
        }

/*
        for(int i = 0 ;i < n ;i++ ) {
            
            if( i + n == m && i == n ) {
                count--;
            }
            if(p[i] + p[n] > w) {
                count++;
                
            }
            if(p[i] + p[n] <= w) {
                if( i == n ) {
                count--;

                }
                count++;
                n--;

            }
            

        }
*/  

        cout << count ;
        return 0;
    }