// Link: https://leetcode.com/problems/two-sum/

/*
Thought Process:
- for brute force it will take time of O(n^2)
- implement hashmap for fast lookup in O(1) or near O(n)
- for loop > in hashmap find (target - num) if find then return index of num and (target -num)
- add num in hashmap value of i
- also return empty vector if not find any
*/
#include <bits/stdc++.h>
using namespace std;

// nums = 2,7,10,11 - target = 9 
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairIdx;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (pairIdx.find(target - num) != pairIdx.end()) {
                return {i, pairIdx[target - num]};
            }
            pairIdx[num] = i;
        }
        return {};
    }
};

/*
Time Complexity: O(n)
- in brute force was O(n^2)
- optimize via hashmap

Space Complexity: O(n)
- due to hashmap
*/
