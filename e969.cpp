#include <bits/stdc++.h>
using namespace std;

int main() {
    int food[2] = {32, 55};
    int n, m, k; // n錢 m時間 k食物
    cin >> n >> m >> k;
    int time = 0;
    int total = 0;
    if(food[k] > n) {
        cout << "Wayne can't eat and drink.";

    }else {
        while(1) {
            // cout << "k " << k << endl;
            n = n - food[k];
            total++;
            if(total != 1) {
                time = time + m;

            }
            if(k == 0 ) {
                k = 1;

            }else if(k == 1){
                k = 0;

            }
            // cout << "test k"<< k << endl;

            if(k == 0) {
                cout << time << ": Wayne drinks a Corn soup, and now he";
                if(n == 0) {
                    cout << " doesn't have money." << endl;

                }else if(n == 1) {
                    cout << " has 1 dollar." << endl;

                }else {
                    cout << " has " << n << " dollars." << endl;

                }

            }else {
                cout << time << ": Wayne eats an Apple pie, and now he";
                if(n == 0) {
                    cout << " doesn't have money." << endl;

                }else if(n == 1) {
                    cout << " has 1 dollar." << endl;

                }else {
                    cout << " has " << n << " dollars." << endl;

                }

            }
            
            if(n - food[k] < 0) {
                break;

            }

        }

    }

    return 0;

}