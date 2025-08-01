#include<bits/stdc++.h>
using namespace std;

// kadane's algorithm:
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];

            if(sum>maxi){
                maxi = sum;
            }

            // If sum is negative, adding it to any future element will only make the total smaller. Instead of carrying this "negative baggage," we drop it and start a new subarray.

            if(sum<0){  
                sum = 0;
            }
        }

        return maxi;
    }
};