#include <iostream>
using namespace std;

inline double FtoC(double f) {
    return (f - 32) * 5 / 9;
}

int main() {
    double f;
    cout << "Please enter the temperature in Fahrenheit:";
    cin >> f;
    cout << "The temperature in Celsius is " << FtoC(f) << " ¢J";
    return 0;

}