#include<bits/stdc++.h>
using namespace std;

int main() {
    int A[3], a[3];
    int P;
    int total = 0;
    for(int i = 0; i < 3; i++) {
        cin >> A[i];

    }
    sort(A, A+3);
    if(A[0] == A[2]) {
        cout << 3 << " " << A[0];

    }else if(A[0] == A[1]) {
        cout << 2 << " " << A[2] << " " << A[1];

    }else if(A[1] == A[2]) {
        cout << 2 << " " << A[1] << " " << A[0];

    }else {
        cout << 1 << " " << A[2] << " " << A[1] << " " << A[0];

    }
    return 0;

}