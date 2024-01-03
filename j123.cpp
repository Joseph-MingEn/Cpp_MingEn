#include<bits/stdc++.h>
using namespace std;
int r, c;
bool taken[40][60];
int used, no;
void A(int j) {
    int i = c;
    for(; i >= 0; i--) {
        if(i == 0 || taken[j][i-1] || taken[j+1][i-1] || taken[j+2][i-1] || taken[j+3][i-1]) break;

    }
    if(i >= c) {
        no++;
    }else {
        taken[j][i] = true;
        taken[j+1][i] = true;
        taken[j+2][i] = true;
        taken[j+3][i] = true;
        used = used + 4;

    }

}
void B(int j) {
    int i = c+2;
    for(; i >= 2; i--) {
        if(i == 2 || taken[j][i-3]) break;

    }
    if(i >= c) {
        no++;
    }else {
        taken[j][i] = true;
        taken[j][i-1] = true;
        taken[j][i-2] = true;
        used = used + 3;

    }

}
void C(int j) {
    int i = c+1;
    for(; i >= 0; i--) {
        if(i == 1 || taken[j][i-2] || taken[j+1][i-2]) break;

    }
    if(i >= c) {
        no++;
    }else {
        taken[j][i] = true;
        taken[j+1][i] = true;
        taken[j][i-1] = true;
        taken[j+1][i-1] = true;
        used = used + 4;

    }

}
void D(int j) {
    int i = c+2;
    for(; i >= 2; i--) {
        if(i == 2 || taken[j+1][i-3] || taken[j][i-1]) break;

    }
    if(i >= c) {
        no++;
    }else {
        taken[j+1][i] = true;
        taken[j+1][i-1] = true;
        taken[j+1][i-2] = true;
        taken[j][i] = true;
        used = used + 4;

    }

}
void E(int j){
	int i = c+1;
	for(;i >= 1;i--){
		if(i == 1 || taken[j][i-1] ||taken[j+1][i-2] || taken[j+2][i-2]) break;
	}
	if(i >= c) no ++;
	else {
		taken[j][i] = true;
		taken[j+1][i] = true;
		taken[j+2][i] = true;
		taken[j+1][i-1] = true;
		taken[j+2][i-1] = true;
		used += 5;
	}

}
int main() {
    int q;
    cin >> r >> c >> q;
    while(q--) {
        char ch;
        int j;
        cin >> ch >> j;
        if(ch == 'A') A(j);
        if(ch == 'B') B(j);
        if(ch == 'C') C(j);
        if(ch == 'D') D(j);
        if(ch == 'E') E(j);

    }
    cout << r*c - used << " " << no << endl;

}