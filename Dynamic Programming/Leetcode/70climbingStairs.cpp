#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }

    // we use memoization here because when we just use recursion even for n=45 we get a TLE this is why dp is important.

    int helper(int n, vector<int>&dp){
        if(n==0 or n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = helper(n-1,dp) + helper(n-2,dp);
    }

};