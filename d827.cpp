#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 0;
    m = n/12;
    n = n - m*12;
    cout << n*5 + m*50;

    return 0;
}