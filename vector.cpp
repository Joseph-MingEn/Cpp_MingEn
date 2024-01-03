#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;  // �Ыؤ@�ӪŪ� vector

    // �K�[����
    numbers.push_back(10);     // [10]
    numbers.push_back(20);     // [10, 20]
    numbers.push_back(30);     // [10, 20, 30]
    // numbers.push_back(40);
    // numbers.push_back(50);

    // �������
    std::cout << numbers[0] << std::endl;  // ��X�Ĥ@�Ӥ��� 10

    // �ק露��
    numbers[1] = 50;           // [10, 50, 30]

    // �R������
    numbers.pop_back();        // �����̫�@�Ӥ��� [10, 50]
    
    // ��������Ӽ�
    std::cout << numbers.size() << std::endl;  // ��X�����Ӽ� 2

    // �ϥέ��N��
    std::cout << "\nUsing iterators: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    // �ϥνd�� for �j��
    std::cout << "\nUsing range-based for loop: ";
    for (const auto& elem : numbers) {
        std::cout << elem << " ";
    }

    return 0;
}
