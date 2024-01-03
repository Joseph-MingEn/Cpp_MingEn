#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;  // 創建一個空的 vector

    // 添加元素
    numbers.push_back(10);     // [10]
    numbers.push_back(20);     // [10, 20]
    numbers.push_back(30);     // [10, 20, 30]
    // numbers.push_back(40);
    // numbers.push_back(50);

    // 獲取元素
    std::cout << numbers[0] << std::endl;  // 輸出第一個元素 10

    // 修改元素
    numbers[1] = 50;           // [10, 50, 30]

    // 刪除元素
    numbers.pop_back();        // 移除最後一個元素 [10, 50]
    
    // 獲取元素個數
    std::cout << numbers.size() << std::endl;  // 輸出元素個數 2

    // 使用迭代器
    std::cout << "\nUsing iterators: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }

    // 使用範圍式 for 迴圈
    std::cout << "\nUsing range-based for loop: ";
    for (const auto& elem : numbers) {
        std::cout << elem << " ";
    }

    return 0;
}
