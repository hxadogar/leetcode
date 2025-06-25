#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPair(char last, char cur) {
        return (last == '(' && cur == ')') || (last == '{' && cur == '}') ||
               (last == '[' && cur == ']');
    }

    bool isValid(string s) {
        stack<char> stk;
        for (char ch : s) {
            if (!stk.empty()) {
                char last = stk.top();
                if (isPair(last, ch)) {
                    stk.pop();
                    continue;
                }
            }
            stk.push(ch);
        }
        return stk.empty();
    }
};


// TC O(N)
// SC O(1)