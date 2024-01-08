#include<bits/stdc++.h>
using namespace std;

int main() {
    int oneteam = 0;
    int twoteam = 0;
    int o1, o2, t1, t2;
    int onetotal = 0;
    int twototal = 0;
    int count = 0;
    int total = 0;
    int fraction;
    for(int o = 0; o < 2; o++) {
        count++;
        for(int i = 0; i < 4; i++) {
            cin >> fraction;
            oneteam = oneteam + fraction;

        }
        for(int i = 0; i < 4; i++) {
            cin >> fraction;
            twoteam = twoteam + fraction;

        }
        if(count == 1) {
            o1 = oneteam;
            t1 = twoteam;

        }
        if(count == 2) {
            o2 = oneteam;
            t2 = twoteam;

        }
        if(oneteam > twoteam) {
            total++;

        }else if(oneteam < twoteam) {
            total--;

        }
        onetotal = onetotal + oneteam;
        twototal = twototal + twoteam;
        oneteam = 0;
        twoteam = 0;

    }
    cout << o1 << ":" << t1 << endl;
    cout << o2 << ":" << t2 << endl;

    if(total > 0) {
        cout << "Win";

    }else if(total < 0) {
        cout << "Lose";

    }else if(total == 0){
        cout << "Tie";

    }

    return 0;
}