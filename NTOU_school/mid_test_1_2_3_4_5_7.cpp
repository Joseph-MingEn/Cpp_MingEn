#include<iostream>
using namespace std;

void test1();

void test2();
int Case1(int n);

void test3();

void test4();
long long int Case2(int a);

void test5();
void swap1(int &a, int &b);
int swap2(int a, int b);
void swap3(int *a, int *b);

void test7();


int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test7();
    return 0;

}

void test1() {
    cout << "TuMingEn 0136C008" << endl;
}


void test2() {
    int n;
    int money = 0;
    while(1) {
        cout << "please input num: ";
        cin >> n;
        cout << "你選的是" << Case1(n) << endl;
        money = money + Case1(n);
        cout << "目前總金額: " << money << endl;
        cout << "是否還要繼續(請輸入Yes/No): ";
        string s;
        cin >> s;
        if(s == "No" or s == "no") {
            break;
        }
    }
    cout << "test2 end" << endl;

}

int Case1(int n) {
    switch (n) {
        case 1:
            cout << "one" << endl;
            return 99;
        case 2:
            cout << "two" << endl;
            return 199;
        case 3:
            cout << "three" << endl;
            return 299;
        case 4:
            cout << "four" << endl;
            return 399;
        default:
            int i;
            cout << "你TM的是87嗎?" << '\n' << "請重新輸入:";
            cin >> i;
            return Case1(i);        
    }
}

void test3() {
    int count = 0;
    for(int i = 1; i <= 300; i++) {
        if(i % 7 != 0) {
            count = count + i;
        }
    }
    cout << "test3 count: " << count << endl;
}

void test4() {
    cout << "test4 " << Case2(10) << endl;
}

long long int Case2(int a) {
    if(a == 1) {
        return 1;
    }else {
        return a * Case2(a - 1);
    }
}

void test5() {
    cout << "test5" << endl;
    int a = 10, b = 20;
    cout << a << " " << b << endl;
    swap1(a, b);
    cout << a << " " << b << endl;
    swap2(a, b);
    cout << a << " " << b << endl;
    swap3(&a, &b);
    cout << a << " " << b << endl;
}

void swap1(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int swap2(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return a, b;
}
void swap3(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void test7() {
    cout << "test7" << endl;
    int a[10] = {1, 12, 3, 4, 15, 6, 17, 8, 9, 10};
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
}