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
    cout << "請輸入華氏溫度: ";
    cin >> fahrenheit;
    double celsius = fahrenheitToCelsius(fahrenheit);
    cout << "攝氏溫度為: " << celsius << endl;
    hallo("world");
    return 0;
}