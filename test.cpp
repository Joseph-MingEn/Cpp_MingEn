#include <iostream>
#include <iterator> // std::size
using namespace std;

int main() {
    // �ʺA���t��ƨê�l��
    int* b = new int(10);
    cout << "Dynamically allocated integer: " << *b << endl;

    // ����O����
    delete b;

    return 0;
}