#include <bits/stdc++.h>
using namespace std;

int main() {
    int hh, mm, time;
    cin >> hh >> mm;
    time = hh * 100 + mm;
    if(time < 730 || time >= 1700) cout << "Off School" << endl;
    else cout << "At School" << endl;
    return 0;
}