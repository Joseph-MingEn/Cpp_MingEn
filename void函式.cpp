#include <bits/stdc++.H>
using namespace std;

void F(int b[],  int size);


int main() {
	int a[] = {1, 2, 3, 4, 5};
	int s = sizeof(a)/sizeof(a[0]);

	F(a,s);
	for(int i = 0; i < s; i++ ) {
		cout << a[i] << endl;
		
	}
	
	return 0;
	
}

void F(int b[], int size) {
	for(int i=0 ;i < size ;i++ ) {
		b[i] *= 5 ;
		 
	}
	
}	
