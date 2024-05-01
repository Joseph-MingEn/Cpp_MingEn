#include <bits/stdc++.h>
using namespace std;

int main() {
    int suger, kid;
    cin >> suger >> kid;
    if(kid!=0) suger%kid == 0? cout << "OK!" : cout << suger%kid;
    else cout << "OK!";

    return 0;

}