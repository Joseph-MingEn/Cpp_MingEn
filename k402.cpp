#include <bits/stdc++.h>
using namespace std;

int fs(int n);

int main() {
	int n ,ans;
	int a = 0 ,b = 1;
	int i ,temp;
	
	cin >> n ;

    // n = n-1;
	
	if(n== 0|| n == 1) {
		ans = n;
		
	}else {
		for(i = 2 ; i <= n ; i++) {
			temp = b;
			b += a;
			a = temp;
			
		}
		ans = b;
		
	}
	
	cout << ans << endl;
	return 0;
	
}

