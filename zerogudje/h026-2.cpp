#include<bits/stdc++.h>
using namespace std;

//0指石頭，2指剪刀，5指布
int main() {
    int F, f, fl;
    cin >> F;
    int n, count;
    cin >> n;
    int wl = 0;
    int y[n], x[n], Ft[n];
    for(int i = 0; i < n; i++) {
        cin >> y[i];

    }
    f = y[0];
    fl = -1;
    count = 0;
    while(1) {
        Ft[count] = F;
        // cout << Ft[count] << " " << count << "F" << F << endl;
        count++;
        // cout << "f = " << f << endl;
        if(f == 0) {
            if(F == 5) {
                for(int i = 0; i < count; i++) {
                    cout << Ft[i] << " ";
                }
                cout << ": Won at round " << count;
                wl++;

            }
            if(F == 2) {
                for(int i = 0; i < count; i++) {
                    cout << Ft[i] << " ";
                }
                cout << ": Lost at round " << count;
                wl++;

            }
            
        }
        if(f == 2) {
            if(F == 0) {
                for(int i = 0; i < count; i++) {
                    cout << Ft[i] << " ";
                }
                cout << ": Won at round " << count;
                wl++;

            }
            if(F == 5) {
                for(int i = 0; i < count; i++) {
                    cout << Ft[i] << " ";
                }
                cout << ": Lost at round " << count;
                wl++;
                
            }

        }
        if(f == 5) {
            if(F == 2) {
                for(int i = 0; i < count; i++) {
                    cout << Ft[i] << " ";
                }
                cout << ": Won at round " << count;
                wl++;

            }
            if(F == 0) {
                for(int i = 0; i < count; i++) {
                    cout << Ft[i] << " ";
                }
                cout << ": Lost at round " << count;
                wl++;
                
            }

        }
        // cout << Ft[count-2] << " " << Ft[count-1];
        if(Ft[count-2] == Ft[count-1]) {
            // cout << "asdasd" << endl;
            if(Ft[count-1] == 0) {
                F = 5;

            }
            if(Ft[count-1] == 2) {
                F = 0;

            }
            if(Ft[count-1] == 5) {
                F = 2;

            }
        }else {
            F = f;

        }
        f = y[count];
        if(n == count) {
            break;

        }
        if(wl != 0) {
            break;
            
        }

    }
    if(wl == 0) {
        for(int i = 0; i < count; i++) {
            cout << Ft[i] << " ";
        }
        cout << ": Drew at round " << count;
    
    }

    return 0;

}