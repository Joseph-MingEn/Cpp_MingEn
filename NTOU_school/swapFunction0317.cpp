#include <iostream>
using namespace std;
void swap1(int *a, int *b);
void swap2(int a, int b);
void swap3(int &a, int &b);


int main() {
	int x = 5;
	int y = 10;
	cout << "In main() x =" << x << ", y =" << y << endl;
	swap1(&x, &y);
	cout << "In main() x =" << x << ", y =" << y << endl;
	swap2(x, y);
	cout << "In main() x =" << x << ", y =" << y << endl;
	swap3(x, y);
	cout << "In main() x =" << x << ", y =" << y << endl;

	return 0;
}

void swap1(int *a, int *b) {
	cout << "在memo swap裡 a =" << a << ", b =" << b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "在memo swap裡交換" << endl;

}

void swap2(int a, int b) {
	cout << "在swap2裡 a =" << a << ", b =" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "在swap2裡交換" << endl;

}

void swap3(int &a, int &b) {
	cout << "在swap3裡 a =" << a << ", b =" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "在swap3裡交換" << endl;

}
