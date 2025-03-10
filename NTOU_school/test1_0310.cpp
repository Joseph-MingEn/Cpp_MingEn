#include <iostream>
#include <algorithm> // 新增這行
#define SIZE 4
using namespace std;

int main() {
    int nums[SIZE];

    cout << "please enter 4 numbers, program will output Mini numder" << endl;

    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums[i];
    }

    sort(nums, nums + SIZE);

    cout << "Mini number: " << nums[0] << endl;
}