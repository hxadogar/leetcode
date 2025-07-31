#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        backtracker(candidates, result, combination, target, 0);
        return result;
    }

    void backtracker(const vector<int>& candidates, vector<vector<int>>& result, vector<int>& combination, int target, int idx) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        if (target < 0) {
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            combination.push_back(candidates[i]);
            backtracker(candidates, result, combination, target - candidates[i], i);
            combination.pop_back();
        }
    }
};