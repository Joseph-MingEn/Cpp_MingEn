#include <bits/stdc++.h>
using namespace std;

int fs(int n);

int main() {
	int n ;
	cin >> n ;
	
	cout << "F(" << n << ") = " << fs(n) << endl;
	return 0;
	
}

int fs(int n) {
	if(n == 0 || n == 1) {
		return n;
		
	}else {
		// cout << n << endl;
		return fs(n-1) + fs(n-2) ;

	}
	
}
