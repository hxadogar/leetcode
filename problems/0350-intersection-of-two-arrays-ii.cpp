#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        unordered_map<int, int> mp;

        for (int num : nums1) {
            mp[num]++;
        }

        for (int num : nums2) {
            if (mp.find(num) != mp.end()) {
                intersection.push_back(num);
                mp[num]--;
                if (mp[num] == 0) {
                    mp.erase(num);
                }
            }
        }
        return intersection;

        // for(int i = 0; i < nums1.size(); i++) {
        //     for(int j = 0; j < nums2.size(); j++) {
        //         if(nums1[i] == nums2[j]) {
        //             intersection.push_back(nums2[j]);
        //             nums2.erase(nums2.begin() + j);
        //             break;
        //         }
        //     }
        // }
        // return intersection;
    }
};

// TC: O(n + m)
// i use hashmap for fast lookup

// SC: O(N)
// new map and vector take space