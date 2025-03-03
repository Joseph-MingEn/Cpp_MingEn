#include <bits/stdc++.h>
using namespace std;

int Case(int i) {
    switch (i) {
    case 1:
        return 101;

    case 2:
        return 129;

    case 3:
        return 119;

    case 4:
        return 139;
    default:
        cout << "Invalid input, please try again:";
        int j;
        cin >> j;
        return Case(j);
    }
}
int main() {
    int ans = 0, total = 0;
    char c = 'y';
    while (c == 'y' || c == 'Y') {
        cout << "Please enter the meal number (1: McChicken, 2: Crispy Chicken, 3: Big Mac, 4: Spicy Chicken):";
        cin >> ans;
        int price = Case(ans);
        total += price;
        cout << "It costs " << price << " dollars" << '\n' << "Would you like to order more? (y/n):";
        cin >> c;

    }
    cout << "The total cost is " << total << " dollars";
}
