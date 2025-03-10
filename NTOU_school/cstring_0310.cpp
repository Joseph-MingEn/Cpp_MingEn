#include<iostream>
#include<string>
using namespace std;

int main() {
    string pw = "NTOU0101";
    int count = 0;
    while(count < 3) {
        string input;
        cout << "Please enter the password: ";
        cin >> input;
        if(input == pw) {
            cout << "Correct password!" << endl;
            break;
        } else {
            cout << "Wrong password!" << endl;
            count++;
        }
    }
    if(count == 3) {
        cout << "?????????¡H" << endl;
    }

    return 0;
}