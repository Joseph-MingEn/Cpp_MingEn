#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int Quarter = arr.size() / 4;
        int num = arr[0], count = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(num == arr[i]) {
                count++;
                if(count > Quarter) {
                    return num;
                }
            }else {
                num = arr[i];
                count = 1;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1,2,2,6,6,6,6,7,10};
    cout << solution.findSpecialInteger(arr) << endl;
    return 0;

}
