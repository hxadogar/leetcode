#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // empty check
        if (s == "" || s.size() == 1)
            return true;
        // create empty int for hold value of letter to check is it not other
        // char
        string cleanLine = "";
        for (char ch : s) {
            // int intValue = ch;
            // if (intValue >= 48 && intValue <= 57 ||
            //     intValue >= 65 && intValue <= 90) {
            //     cleanLine += ch;
            // } else if (intValue >= 97 && intValue <= 122) {
            //     cleanLine += toupper(ch);
            // }
            if(isalnum(ch)) {
                cleanLine += tolower(ch);
            }
        }
        cout << cleanLine;
        // main logic (use two pointer)
        int left = 0;
        int right = cleanLine.size() - 1;
        while (left < cleanLine.size()) {
            if (cleanLine[left] != cleanLine[right])
                return false;

            left++;
            right--;
        }
        return true;
    }
};

// TC: O(N)
// SC: O(1)