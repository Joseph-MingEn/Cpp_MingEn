#include<bits/stdc++.h>
using namespace std;

int main() {
    string ID;
    cin >> ID;
    int count = 0;
    int num = 0;
    int real[26];
    char english[26] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
        'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };
    int id_table[26] = {
        10, 11, 12, 13, 14, 15, 16, 17, 34, 
        18, 19, 20, 21, 22, 35, 23, 24, 
        25, 26, 27, 28, 29, 32, 30, 31, 33
    };
    int idNumber_table[26];
    for(int i = 0; i < 26; i++) {
        string idToString = to_string(id_table[i]);
        idNumber_table[i] = (idToString[0] - '0') + (idToString[1] - '0') * 9;

        // cout << idNumber_table[i] << endl;

    }
    for(int i = 0; i < ID.length()-1; i++) {
        count = count + (ID[i] - '0')*(8 - i);
        // cout << count << endl;

    }
    for(int i = 0; i < 26; i++) {
        int s = count + idNumber_table[i];
        // cout << s << endl;
        int c = 10 - (s % 10);
        if(c == 10) {
            c = 0;
        }
        // cout << ID[8] << ' ' << c << endl;
        if(c == ID[8] - '0') {
            // cout << "hi" << endl;
            real[num] = i;
            num++;

        }
        // cout << num << endl;
    }
    for(int i = 0; i < num; i++) {
        cout << english[real[i]];

    }
    return 0;
}