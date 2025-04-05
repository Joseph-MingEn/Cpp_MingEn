#include <iostream>
using namespace std;

int findMax(int a[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int findMin(int a[], int n) {
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int main() {
    
}