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
	for(int i = 1 ; i <= n ; i++ ) {
		int d = 0;
		d = d + i;
		
	}
	return d ;
}
