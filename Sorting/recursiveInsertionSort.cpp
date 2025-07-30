#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        insertionSortUsingRecursion(nums,n,0);
        return nums;
    }

    void insertionSortUsingRecursion(vector<int>& nums, int n, int i){
        if(i>=n) return;
        for(int j=i; j>0; j++){
            if(nums[j]<nums[j-1]){
                int temp = nums[j];
                nums[j] = nums[j-1];
                nums[j-1] = temp;
            }
            else{
                break;
            }
        }
        insertionSortUsingRecursion(nums,n,i+1);
    }
};