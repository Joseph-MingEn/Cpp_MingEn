#include <iostream>
using namespace std;

long long int fact(int i);
int main(){
    cout << fact(46);
}

long long int fact(int i) {
	if (i == 1) {
		return 1;
	}
	else {
		return i * fact(i - 1);
	}
}
