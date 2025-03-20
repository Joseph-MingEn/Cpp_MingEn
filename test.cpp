#include <bits/stdc++.h>
using namespace std;

void largest(int a[], int n, int *largest, int *smallest) {
    *largest = INT_MIN;
    *smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] > *largest) {
            *largest = a[i];
        }
        if (a[i] < *smallest) {
            *smallest = a[i];
        }
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int largest_num, smallest_num;
    largest(a, n, &largest_num, &smallest_num);
    cout << "Largest: " << largest_num << endl;
    cout << "Smallest: " << smallest_num << endl;
    return 0;
}