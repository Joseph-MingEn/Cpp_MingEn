#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack<int> st1;
	st1.push(1);	st1.push(2);	st1.push(3);
	cout << st1.pop() << endl;
	cout << st1.pop() << endl;
	cout << st1.pop() << endl;
	
	Stack<char, 5> st2;
	st2.push('a'); st2.push('b'); st2.push('c'); st2.push('d'); st2.push('e');
	st2.push('f');
	for (int i = 0; i < 6; i++) {
        if (st2.isEmpty()) {
            break;
        }
		cout << st2.pop() << endl;
		
	}
}