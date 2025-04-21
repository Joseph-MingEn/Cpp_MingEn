#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string idStr;
	bool isID = false;
	string num = "0123456789";

	do {
		cout << "請輸入生日共7碼:";
		cin >> idStr;
		if (idStr.size() != 7) {
			cout << "請輸入正確的格式" << endl;
			continue;
		}

		if (idStr.substr(1, 9).find_first_not_of(num) == string::npos) {
			isID = true;
		}
		else {
			cout << "請輸入正確的數字格式" << endl;
		
		}
	} while (!isID);

	
}
