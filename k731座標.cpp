#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, N, W, S, E;
    int xt, yt;
    int lt = 0;
    int rt = 0;
    int t = 0;
    int count = 1;
    int path;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];

    }
    // cout << "n:" << n << endl;
    for(int i = 0; i < n; i++) {
        // cout << "all®y¼Ð:"<< x[i] << " " << y[i] << endl;

    }
    xt = x[0];
    yt = y[0];
    // cout << "®y¼Ð:" << xt << " " << yt << endl;
    if(x[0] > 0) {
        path = 2;

    }else if(x[0] < 0) {
        path = 3;

    }
    if(y[0] > 0) {
        path = 0;

    }else if(y[0] < 0) {
        path = 1;

    }
    // cout << "path:" << path << endl;
    while(1) {
        if(path == 0) {
            if(yt - y[count] != 0) {
                if(yt - y[count] < 0) {
                    yt = y[count];
                    path = 0;
                    count++;

                }else {
                    yt = y[count];
                    path = 1;
                    t++;
                    count++;

                }
            }else if(xt - x[count] != 0) {
                if(xt - x[count] < 0) {
                    xt = x[count];
                    path = 2;
                    rt++;
                    count++;

                }else {
                    xt = x[count];
                    path = 3;
                    lt++;
                    count++;

                }

            }
        }else if(path == 1) {
            if(yt - y[count] != 0) {
                if(yt - y[count] < 0) {
                    yt = y[count];
                    path = 0;
                    t++;
                    count++;

                }else {
                    yt = y[count];
                    path = 1;
                    count++;

                }
            }else if(xt - x[count] != 0) {
                if(xt - x[count] < 0) {
                    xt = x[count];
                    path = 2;
                    lt++;
                    count++;

                }else {
                    xt = x[count];
                    path = 3;
                    rt++;
                    count++;

                }
                
            }

        }else if(path == 2) {
            if(yt - y[count] != 0) {
                if(yt - y[count] < 0) {
                    yt = y[count];
                    path = 0;
                    lt++;
                    count++;

                }else {
                    yt = y[count];
                    path = 1;
                    rt++;
                    count++;

                }
            }else if(xt - x[count] != 0) {
                if(xt - x[count] < 0) {
                    xt = x[count];
                    path = 2;   
                    count++;    

                }else {
                    xt = x[count];
                    path = 3;
                    t++;
                    count++;

                }

            }

        }else {
            if(yt - y[count] != 0) {
                if(yt - y[count] < 0) {
                    yt = y[count];
                    path = 0;
                    rt++;
                    count++;

                }else {
                    yt = y[count];
                    path = 1;
                    lt++;
                    count++;

                }
            }else if(xt - x[count] != 0) {
                if(xt - x[count] < 0) {
                    xt = x[count];
                    path = 2;       
                    t++;
                    count++;

                }else {
                    xt = x[count];
                    path = 3;
                    count++;

                }

            }
            
        }
        if(count == n) {
            break;

        }

    }
    cout << lt << " " << rt << " " << t;
    return 0;

}