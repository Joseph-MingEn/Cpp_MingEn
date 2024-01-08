#include <iostream>
using namespace std;

// 0指石頭，2指剪刀，5指布

int main(void) {
// set
    int f;
    int n;
    cin >> f;
    cin >> n;
    int count = 0;
    int A[n];
    for(int i = 1 ;i <= n ;i++ ) {
        cin >> A[i];
    }
// run
    for(int i = 1 ;i <= n ;i++ ) {
        if(f == 0) {
            if(A[i] == 2) {
                cout << f << " : Won at round " << i ;
                count = 0;
                break;
            }
            if(A[i] == 5) {
                cout << f << " : Lost at round " << i ;
                count = 0;
                break;
            }
            if(A[i] == 0) {
                cout << f << " " ;
                count++ ;
                if(count == n) {
                    cout << ": Drew at round " << n ;
                    count = 0;
                    break;
                }else if(count%2 == 0) {
                    f = 5;
                }else if(count%2 != 0) {
                    f = 0;
                }
            }
        }else if(f == 2) {
            if(A[i] == 5) {
                cout << f << " : Won at round " << i ;
                count = 0;
                break;
            }
            if(A[i] == 0) {
                cout << f << " : Lost at round " << i ;
                count = 0;
                break;
            }
            if(A[i] == 2) {
                cout << f << " " ;
                count++ ;
                if(count == n) {
                    cout << ": Drew at round " << n ;
                    count = 0;
                    break;
                }else if(count%2 == 0) {
                    f = 0;
                }else if(count%2 != 0) {
                    f = 2;
                }
            }
        }else if(f == 5) {
            if(A[i] == 0) {
                cout << f << " : Won at round " << i ;
                count = 0;
                break;
            }
            if(A[i] == 2) {
                cout << f << " : Lost at round " << i ;
                count = 0;
                break;
            }
            if(A[i] == 5) {
                cout << f << " " ;
                count++ ;
                if(count == n) {
                    cout << ": Drew at round " << n ;
                    count = 0;
                    break;
                }else if(count%2 == 0) {
                    f = 2;
                }else if(count%2 != 0) {
                    f = 5;
                }
            }
        }
    }
    return 0;
}