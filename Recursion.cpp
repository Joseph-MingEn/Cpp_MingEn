#include <bits/stdc++.h>
using namespace std;

int abc(int n);

int main() {
	int n ;
	cin >> n ;
	
	cout << n << "! = " << abc(n) << endl;
}

int abc(int n) {
	if(n == 0 || n == 1) {
		return 1;
		
	}else {
		return n*abc(n-1);
		
	}
}

