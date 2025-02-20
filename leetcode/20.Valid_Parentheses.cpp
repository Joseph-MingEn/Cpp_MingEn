#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char c : s) {
            if(c == '(' || c == '[' || c == '{') {
                stk.push(c);

            }else {
                if(stk.empty()) {
                    return false;

                }

                char top = stk.top();
                if((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                    stk.pop();

                }else {
                    return false;
                }

            }

        }

        return stk.empty();
    }
};

int main() {
    Solution sol;
    string test1 = "()";      // true
    string test2 = "()[]{}";  // true
    string test3 = "(]";      // false
    string test4 = "([)]";    // false
    string test5 = "{[]}";    // true
    
    cout << boolalpha; // Åý cout ¿é¥X true/false
    cout << sol.isValid(test1) << endl;
    cout << sol.isValid(test2) << endl;
    cout << sol.isValid(test3) << endl;
    cout << sol.isValid(test4) << endl;
    cout << sol.isValid(test5) << endl;

    return 0;
}
