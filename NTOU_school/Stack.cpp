#include <iostream>
using namespace std;

#define SIZEMAX 8

class stack {
    public:
    stack() {
        sp = 0;
    }
    void push(int n);
    int pop();
    bool isEmpty();

    private:
    int sp;
    int buffet[SIZEMAX];
    static overERROR() {
        cout << "滿了" << endl;

    }

};

void stack::push(int n) {
    if(sp >= SIZEMAX) {
        overERROR();

    }else {
        buffet[sp++] = n;

    }
}

int stack::pop() {
    if(sp == 0){
        return -1;
    }else {
        return buffet[--sp];

    }
}

bool stack::isEmpty() {
    if(sp == 0) {
        return true;

    }else {
        return false;

    }
}

int main() {
    stack st1;
    st1.push(123);
    cout << st1.pop() << endl;
    for(int i = 0; i < SIZEMAX + 1; i++) {
        int a;
        cin >> a;
        st1.push(a);
    }
    for(int i = 0; i < SIZEMAX + 1; i++) {
        // bool emtly = isEmpty();
        if(st1.isEmpty() == true) {
            cout << "空了沒資料了" << endl;
            break;

        }

        cout << st1.pop() << endl;
    }
}