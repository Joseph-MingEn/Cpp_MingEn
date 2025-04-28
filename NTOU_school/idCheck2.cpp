#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string idStr;
	bool isID = false;
	string num = "0123456789";
	int total = 0;

	int AZtoNum_table[] = { 10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33 };


	do {
		cout << "請輸入身分證字號:";
		cin >> idStr;
		if (idStr.size() != 10) {
			cout << "請輸入正確的格式" << endl;
			continue;
		}
		if ((idStr[0] - 'A') <= 25 or (idStr[0] - 'a') <= 25) {
			if (islower(idStr[0])) {
				idStr[0] = toupper(idStr[0]);
			}
		}else {
			cout << "請輸入正確的格式" << endl;

		}
		if (idStr.substr(1, 9).find_first_not_of(num) == string::npos and (idStr[0] - 'A') <= 25) {
			for(int i = 0; i < 10; i++) {
				if (i == 0) {
					int Snum = idStr[0] - 'A';
					total += (Snum / 10) + (Snum % 10) * 9;
					cout << "Snum:" << Snum << "total" << total << endl;

				}else {
					total += (idStr[i] - '0') * (9 - i);
					cout << "Snum:" << idStr[i] - '0' << "total" << total << endl;

				}

			}
			int checkNum = total % 10;
			cout << "checkNum:" << checkNum << "idStr[9] - '0':" << idStr[9] - '0' << endl;
			if (checkNum == (idStr[9] - '0')) {
				isID = true;
			}
		}else {
			cout << "請輸入正確的格式" << endl;

		}
	} while (!isID);
}
