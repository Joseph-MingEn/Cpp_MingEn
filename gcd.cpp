#include <bits/stdc++.h>
using namespace std;

int gcd(int x ,int y);

int main() {
	int a, b ;
	cin >> a >> b;
	
	cout << gcd(max(a ,b) ,min(a ,b)) << '\n';
	
}
int gcd(int x, int y) {
	if(x%y == 0) {
		return y;
		
	}else {
		return gcd(y , x%y);
		
	}
}
