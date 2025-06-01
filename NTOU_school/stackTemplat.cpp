#include <iostream>
using namespace std;

template<class T, int SizeMax = 8>
class stack {
public:
	stack() {
		sp = 0;
	}
	void push(T data);
	T pop();
	bool isEmpty();

private:
	int sp;
	T buffet[SizeMax];
	static void overERROR() {
		cout << "overERROR" << endl;

	}

};

template<class T, int SizeMax>
void stack<T, SizeMax>::push(T data) {
	if (sp >= SizeMax) {
		overERROR();

	}
	else {
		buffet[sp++] = data;

	}
}

template<class T, int SizeMax>
T stack<T, SizeMax>::pop() {
	if (sp == 0) {
		return -1;
	}
	else {
		return buffet[--sp];

	}
}

template<class T, int SizeMax>
bool stack<T, SizeMax>::isEmpty() {
	if (sp == 0) {
		return true;

	}
	else {
		return false;

	}
}

int main() {
	
	stack<int> st1;
	st1.push(1);	st1.push(2);	st1.push(3);
	cout << st1.pop() << endl;
	cout << st1.pop() << endl;
	cout << st1.pop() << endl;
	
	stack<char, 5> st2;
	st2.push('a'); st2.push('b'); st2.push('c'); st2.push('d'); st2.push('e');
	st2.push('f');
	for (int i = 0; i < 6; i++) {
		cout << st2.pop() << endl;
		if (st2.isEmpty() == true) {
			cout << "emptyERROR" << endl;
			break;

		}
	}
	
}
