#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, GID = 0;
    cin >> n;

    int match[n], group[n] = {0};

    for(int i = 0; i < n; i++) {
        cin >> match[i];

    }


    for(int i = 0; i < n; i++) {
        if(group[i]) {
            continue;

        }
        group[i] = ++GID;

        while(1){
            i = match[i];

            if(group[i]) {
                break;

            }
            group[i] = GID;

        }

    }
    cout << GID << '\n';

    return 0;
}