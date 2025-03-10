#include <iostream>
#define SIZE 5
using namespace std;

int main() {
    char arr[SIZE] = {'f', 'w', 's', 'o', 'a'}; // 修改為 char 型別
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    for(int i = 0; i < SIZE - 1; i++) {
        for(int j = 0; j < SIZE - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " "; 
    }
}