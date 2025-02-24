#include <bits/stdc++.h>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void hallo(string s) {
    cout << "Hallo " << s << endl;
}

int main() {
    double fahrenheit;
    cout << "???????: ";
    cin >> fahrenheit;
    double celsius = fahrenheitToCelsius(fahrenheit);
    cout << "?????: " << celsius << endl;
    hallo("world");
    return 0;
}