#include <bits/stdc++.h>
using namespace std;
/*
輸入
5 17
5 5 8 3 10
*/ 

void recur(int pos, long long sum);

int n, p, delta, ans;
int A[25]; //大小依題意

int main(void) {
    int i;
    
    cin >> n >> p;
    for(i=0; i<n; i++) cin >> A[i];
    delta = p;
    
    recur(0, 0);
    
    cout << ans << '\n';
    
    return 0;
}

void recur(int pos, long long sum) {
    int delta0;
    
    if(sum > p) return; //剪枝 (impossible)
    
    //sum <= P
    if(pos == n) { //base case
        if((delta0=(p-sum)) < delta) {
            delta = delta0;
            ans = sum;
        }
    } else {
        recur(pos+1, sum+A[pos]); //take & recursive
        recur(pos+1, sum); //don't take & recursive
    }
}
