#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        create_subset(nums, 0, ans, subset);
        return ans;                
    }

    void create_subset(vector<int>& nums, int index, vector<vector<int>>& ans, vector<int>& subset) {
        if (index == nums.size()) {
            ans.push_back(subset);
            return;
        }

        subset.push_back(nums[index]);
        create_subset(nums, index + 1, ans, subset);

        subset.pop_back();
        create_subset(nums, index + 1, ans, subset);
    }
};