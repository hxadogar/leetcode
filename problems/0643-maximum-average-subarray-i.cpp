#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxAvg = 0;

        double maxSubArr = 0;
        for (int i = 0; i < k; i++) {
            maxSubArr += nums[i];
        }
        maxAvg = maxSubArr / k;

        // sliding windows (fixed)
        for (int i = 0; i < nums.size() - k; i++) {
            // sub i from maxsubarr and add next
            maxSubArr -= nums[i];
            maxSubArr += nums[k + i];

            maxAvg = max(maxAvg, maxSubArr / k);
        }

        return maxAvg;
    }
};

// TC: O(N)
// SC: 0(1)
