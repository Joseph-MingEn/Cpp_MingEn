#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    if(arec >= 1) {
        for(int i = 1; i < arec; i++) {
            cout << "argv[" << i << "]: " << argv[i] << endl;
        }
    }
    return 0;
}