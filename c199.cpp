#include <bits/stdc++.h>
using namespace std;

int main() {
	int j;
	int n[j];
	cin >> j;
	int a ;
	for(int i = 0 ; i < j ; i++) {
		cin >> n[i];
	
		
	}
	int top;
	int count = 1 ;
	top =n[0];
	for(int i = 1 ;i < j ;i++ ) {
		if(top > n[i]) {
			count++;
			top = n[i];
			
		}else {
			top = n[i];
			
		}
	}
	cout << count;

	return 0;
} 
