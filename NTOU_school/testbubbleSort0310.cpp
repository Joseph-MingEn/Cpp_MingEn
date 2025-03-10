#include <iostream>
#define SIZE 5
using namespace std;

int main() {
    int arr[SIZE] = {'f', 'w', 's', 'o', 'a'};
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 1; j < SIZE; j++) {
            if(arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }

    for(int i = 0; i < SIZE; i++) {
        cout << char(arr[i]) << " ";
    }
}