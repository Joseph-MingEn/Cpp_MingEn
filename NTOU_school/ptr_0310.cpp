#include<iostream>
using namespace std;

int main() {
    int *iptr, i = 10;
    iptr = &i;
    double *dptr, d = 3.141324567;
    dptr = &d;
    cout << "iptr: " << iptr << ", *iptr: " << *iptr << endl;
    cout << "dptr: " << dptr << ", *dptr: " << *dptr << endl;
}