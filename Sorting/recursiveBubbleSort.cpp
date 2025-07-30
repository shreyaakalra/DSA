#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        bubbleSortUsingRecursion(nums,n);
        return nums;
    }

    void bubbleSortUsingRecursion(vector<int>& nums, int n){
        if(n==1) return;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                int temp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = temp;
            }
        }
        bubbleSortUsingRecursion(nums,n-1);
    }
};