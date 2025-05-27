#include <iostream>
using namespace std;

template <class T, int SIZEMAX = 8>
class stack {
    public:
    stack() {
        sp = 0;
    }
    bool isEmpty();
    void push(T data);
    T pop();


private:
    int sp;
    T buffet[SIZEMAX];
    void overERROR() {
        cout << "Stack is full" << endl;
    }
};

template <class T, int SIZEMAX>
void stack<T, SIZEMAX>::push(T data) {
    if(sp >= SIZEMAX) {
        overERROR();
    } else {
        buffet[sp++] = data;
    }

}

template <class T, int SIZEMAX>
T stack<T, SIZEMAX>::pop() {
    if(sp == 0) {
        cout << "Stack is empty" << endl;
        return -1;
    } else {
        return buffet[--sp];
    }
}

template <class T, int SIZEMAX>
bool stack<T, SIZEMAX>::isEmpty() {
    if(sp == 0) {
        cout << "Stack is empty" << endl;
        return true;
    } else {
        return false;
    }
}

int main() {
    stack<int> st1;
    st1.push(123);
    cout << st1.pop() << endl;
    
    for(int i = 0; i < 10; i++) {
        int a;
        cin >> a;
        st1.push(a);
    }
    
    while(!st1.isEmpty()) {
        cout << st1.pop() << endl;
    }
    
    return 0;
}