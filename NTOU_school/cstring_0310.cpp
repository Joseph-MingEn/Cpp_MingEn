#include<iostream>
#include<cstring>
using namespace std;

int main() {
    const char pw[] = "NTOU0101";
    int count = 0;
    while(count < 3) {
        char input[60];
        cout << "Please enter the password: ";
        cin.getline(input, 60);
        if(strcmp(input, pw) == 0) {
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