#include <iostream>
using namespace std;

template<class T, int SIZEMAX = 20>
class stack {
public:
	stack() {
		sp = 0;
	}
	void push(int n);
	T pop();
	bool isEmpty();

private:
	int sp;
	T buffet[SIZEMAX];
	static void overERROR() {
		cout << "overERROR" << endl;

	}

};

template<class T, int SIZEMAX>

void stack<T, SIZEMAX>::push(int data) {
	if (sp >= SIZEMAX) {
		overERROR();

	}
	else {
		buffet[sp++] = data;

	}
}

template<class T, int SIZEMAX>
T stack<T, SIZEMAX>::pop() {
	if (sp == 0) {
		return -1;
	}
	else {
		return buffet[--sp];

	}
}

template<class T, int SIZEMAX>
bool stack<T, SIZEMAX>::isEmpty() {
	if (sp == 0) {
		return true;

	}
	else {
		return false;

	}
}

template<class T, int SIZEMAX>
int main() {
	stack<int> st1;
	st1.push(123);
	cout << st1.pop() << endl;
	for (int i = 0; i < SIZEMAX + 1; i++) {
		int a;
		cin >> a;
		st1.push(a);
	}
	for (int i = 0; i < SIZEMAX + 1; i++) {
		// bool emtly = isEmpty();
		if (st1.isEmpty() == true) {
			cout << "emptyERROR" << endl;
			break;

		}

		cout << st1.pop() << endl;
	}
}
