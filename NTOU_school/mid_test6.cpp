#include<iostream>
using namespace std;

int main(int arec, char *argv[]) {
    for(int i = 1; i < arec; i++) {
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }
    return 0;
}