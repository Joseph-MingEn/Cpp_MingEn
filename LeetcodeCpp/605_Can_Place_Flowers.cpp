#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i = 0; i < flowerbed.size(); i++) {
            cout << flowerbed[i] << " ,i =" << i << endl; 
            if(flowerbed[i] == 0) {
                bool emptyLift = (i == 0) or (flowerbed[i-1] == 0);
                bool emptyRight = (i == flowerbed.size() - 1) or (flowerbed[i+1] == 0);

                if(emptyLift && emptyRight) {
                    flowerbed[i] = 1;
                    count++;

                }
            }

        }

        cout << "count = " << count << endl;
        for(int i = 0; i < flowerbed.size(); i++) {
            cout << flowerbed[i] << " ,i =" << i << endl; 
        }
        return count >= n;
    }
};

int main() {
    Solution sol;
    vector<int> flowerbed1 = {1,0,0,0,0,1};
    int n1 = 2; // true
    vector<int> flowerbed2 = {1,0,0,0,1};
    int n2 = 2; // false

    cout << boolalpha; // Åý cout ¿é¥X true/false
    cout << sol.canPlaceFlowers(flowerbed1, n1) << endl;
    cout << sol.canPlaceFlowers(flowerbed2, n2) << endl;

    return 0;
}