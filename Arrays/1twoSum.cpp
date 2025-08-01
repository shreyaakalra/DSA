#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            auto it = find(nums.begin(), nums.end(), diff);
            int j = static_cast<int>(distance(nums.begin(), it));
            if (it != nums.end() && i != j) {
                return {i, j};
            }
        }
        return {0, 0};
    }
};