#include <iostream>
using namespace std;

template <class T, int sizeMax = 8>

class Stack {
private:
    int sp;
    T buffet[sizeMax];
    void overError() {
        cout << "overError" << endl;
    }
    void emptyError() {
        cout << "emptyError" << endl;
    }
public:
    Stack() {
        sp = 0;
    }
    void push(T data);
    T pop(); // 修改回傳型別
    bool isEmpty();
};

template <class T, int sizeMax>
void Stack<T, sizeMax>::push(T data) {
    if(sp >= sizeMax) {
        overError();
    }else {
        buffet[sp++] = data;

    }
}

template<class T, int sizeMax>
T Stack<T, sizeMax>::pop() {
    if(sp == 0) {
        emptyError();
        return T(); // 回傳預設值
    }else {
        return buffet[--sp];
    }
}

template <class T, int sizeMax>
bool Stack<T, sizeMax>::isEmpty() {
   if (sp == 0) {
        return true;
    } else {
        return false;
    } 
}