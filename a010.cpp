#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n; 

    int m = n; 

    for (int i = 2; m > 1; i++ ) { 
        int count = 0; 
        
        while (m % i == 0) {
            count++ ; 
            m = m / i; 
             
        }
        if(count == 1){ 
            cout << i ;

            if (m > 1) { 
                cout << " * "; 

            }
        }
        else if (count > 1) {  
            cout << i << "^" << count;  

            if (m > 1) {  
                cout << " * ";  

            }
        }
    }

    return 0; 
}