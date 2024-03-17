#include<bits/stdc++.h>
using namespace std;

int total = 0;

// void T(string local);

int main() {
    string x;
    cin >> x;
    for(int i = 0; i < x.length(); i++) {
        if(i == 0) {
            if(x[i] == 'A') {
                total = total + 1 + 0*9;

            }else if(x[i] == 'B'){
                total = total + 1 + 1*9;

            }else if(x[i] == 'C'){
                total = total + 1 + 2*9;

            }else if(x[i] == 'D'){
                total = total + 1 + 3*9;

            }else if(x[i] == 'E'){
                total = total + 1 + 4*9;

            }else if(x[i] == 'F'){
                total = total + 1 + 5*9;

            }else if(x[i] == 'G'){
                total = total + 1 + 6*9;

            }else if(x[i] == 'H'){
                total = total + 1 + 7*9;

            }else if(x[i] == 'I'){
                total = total + 3 + 4*8;

            }else if(x[i] == 'J'){
                total = total + 1 + 8*9;

            }else if(x[i] == 'K'){
                total = total + 1 + 9*9;

            }else if(x[i] == 'L'){
                total = total + 2 + 0*9;

            }else if(x[i] == 'M'){
                total = total + 2 + 1*9;

            }else if(x[i] == 'N'){
                total = total + 2 + 2*9;

            }else if(x[i] == 'O'){
                total = total + 3 + 5*9;

            }else if(x[i] == 'P'){
                total = total + 2 + 3*9;

            }else if(x[i] == 'Q'){
                total = total + 2 + 4*9;

            }else if(x[i] == 'R'){
                total = total + 2 + 5*9;

            }else if(x[i] == 'S'){
                total = total + 2 + 6*9;

            }else if(x[i] == 'T'){
                total = total + 2 + 7*9;

            }else if(x[i] == 'U'){
                total = total + 2 + 8*9;

            }else if(x[i] == 'V'){
                total = total + 2 + 9*9;

            }else if(x[i] == 'S'){
                total = total + 2 + 6*9;

            }else if(x[i] == 'S'){
                total = total + 2 + 6*9;

            }else if(x[i] == 'W'){
                total = total + 3 + 2*9;

            }else if(x[i] == 'X'){
                total = total + 3 + 0*9;

            }else if(x[i] == 'Y'){
                total = total + 3 + 1*9;

            }else if(x[i] == 'Z'){
                total = total + 3 + 3*9;

            }
            // cout << "first: " << total << endl;

        }else if(i != x.length() - 1){
            // cout << (x[i] -'0') << " " << (9 - i) << endl;

            total = total + (x[i] -'0')*(9 - i);

        }else {
            total = total + (x[i] -'0');

        }
    }

    // cout << total << endl;

    if(total%10 == 0) {
        cout << "real";

    }else {
        cout << "fake";

    }

    return 0;
}