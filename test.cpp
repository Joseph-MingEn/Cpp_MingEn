#include <bits/stdc++.h>
using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    double fahrenheit;
    cout << "???????: ";
    cin >> fahrenheit;
    double celsius = fahrenheitToCelsius(fahrenheit);
    cout << "?????: " << celsius << endl;
    return 0;
}