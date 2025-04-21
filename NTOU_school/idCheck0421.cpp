#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string idStr;
	bool isID = false;
	string num = "0123456789";

	do {
		cout << "請輸入生日共7碼(YYYMMDD):";
		cin >> idStr;
		if (idStr.size() != 7) {
			cout << "請輸入正確的格式" << endl;
			continue;
		}

		if(idStr.substr(0, 6).find_first_not_of(num) == string::npos) {
			if(stoi(idStr.substr(0, 3)) <= 113) {
				if ( stoi(idStr.substr(3, 2)) <= 12) {
					if (stoi(idStr.substr(5, 2)) <= 31) {
						isID = true;
						cout << "生日:" << idStr.substr(0, 3) << "年" << idStr.substr(3, 2) << "月" << idStr.substr(5, 2) << "日" << endl;

					}else {
						cout << idStr.substr(5, 2) << endl;
						cout << "日輸入錯誤" << endl;
					}

				}else {
					cout << idStr.substr(3, 2) << endl;
					cout << "月輸入錯誤" << endl;
				}

			}else {
				cout << idStr.substr(0, 3) << endl;
				cout << "年輸入錯誤" << endl;
			}
		}else {
			cout << "請輸入正確的數字格式" << endl;
		
		}
	} while(!isID);

	
}
