#include <bits/stdc++.h>
using namespace std;
// 1 1 2 2 2 3
class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        // new vector use here
        // vector<int> vec;
        // vec.push_back(nums[0]);
        // for(int i = 1; i < nums.size(); i++) {
        //     if(nums[i] != nums[i - 1]) {
        //         vec.push_back(nums[i]);
        //     }
        // }
        // nums = vec;
        // return vec.size();

        // other way real two pointer
        if (nums.empty()) return 0;
        int j = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

/*
    Time Complexity: O(n)
    Space Complexity: O(1)
*/