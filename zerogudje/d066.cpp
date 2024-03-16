#include<bits/stdc++.h>
using namespace std;

int main() {
    int hh, mm;
    cin >> hh >> mm;
    int Clock = hh*100 + mm;
    if(Clock < 730 || Clock >= 1700) {
        cout << "Off School";
    }else {
        cout << "At School";
    }

    return 0;
}