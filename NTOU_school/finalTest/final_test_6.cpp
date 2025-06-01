#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string idStr;
    bool isID = false;
    
    do{
        cout << "Enter your idStr: " << endl;
        cin >> idStr;
        if(idStr.length() != 10) {
            cout << "idStr.length() != 10" << endl;
            continue;
        }
        if(isalpha(idStr[0])) {
            if(islower(idStr[0])) {
                idStr[0] = toupper(idStr[0]);
            }
            if(idStr.substr(1, 9).find_first_not_of("0123456789") != string::npos) {
                cout << "idStr.substr(1, 9) is not number" << endl;
                continue;
            }else {
                isID = true;
                cout << "idStr is valid" << endl;
            }

        }else {
            cout << "idStr[0] is not EN" << endl;
            continue;
        }
        
    }while(isID == false);
}