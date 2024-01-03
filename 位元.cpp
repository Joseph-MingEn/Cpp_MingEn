#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned a = 0b01001101, b = 0b001001110; // 0b¤G¶i¦ì
	 
	
	cout << "A " << hex << a << '\n' ;
	cout << "B " << b << '\n' ;
	
	cout << "a&b " << (a&b) << '\n';
	cout << "a|b " << (a|b) << '\n';
	cout << "a^b " << (a^b) << '\n';
	cout << "a<<1 " << (a<<1) << '\n';
	cout << "a>>1 " << (a>>1) << '\n';
	cout << "~a " << (~a) << '\n';

	return 0;
}
