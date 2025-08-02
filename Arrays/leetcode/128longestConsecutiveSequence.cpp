#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi = 0;

        for(auto it=s.begin(); it!=s.end(); it++){
            int num = *it;
            if(s.find(num-1)==s.end()){
                int curr = num+1;
                int count = 1;
                while(s.find(curr)!=s.end()){
                    count++;
                    curr++;
                }
                maxi = max(count,maxi);
            }
        }

        return maxi;
    }
};