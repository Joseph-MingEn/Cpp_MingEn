#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file1;
    file1.open("C:\\Users\\User\\Documents\\GitHub\\C++\\NTOU_school\\finalTest\\final_test_4.txt");
    if (!file1) {
        cout << "File open error!" << endl;
    }

    char str[80];

    file1.getline(str,80);
    cout << str << endl;
}