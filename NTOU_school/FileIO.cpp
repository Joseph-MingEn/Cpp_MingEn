#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream file1;
	file1.open("C:\\Users\\User\\Documents\\GitHub\\C++\\NTOU_school\\test.txt");
	if (!file1) {
		cerr << "失敗" << endl;

	}
	else {
		char str[80];

		file1.getline(str, 80);
		cout << str << endl;
	}
}
