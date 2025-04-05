#include <iostream>
#include <iterator> // std::size
using namespace std;

int main() {
    // 動態分配整數並初始化
    int* b = new int(10);
    cout << "Dynamically allocated integer: " << *b << endl;

    // 釋放記憶體
    delete b;

    return 0;
}