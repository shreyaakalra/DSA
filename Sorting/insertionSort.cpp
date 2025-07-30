// insertion sort: 
#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int>& nums) {
    int n = nums.size();
      for(int i=0; i<n; i++){
        for(int j=i; j>0; j--){
            if(nums[j]<nums[j-1]){
              int temp = nums[j];
              nums[j] = nums[j-1];
              nums[j-1] = temp;
            }
        }
      }
  return nums;
}

int main(){
  
  int n;
  cin >> n;
  
  vector<int> num(n);
  
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  
  vector<int> ans = insertionSort(num);
  
  for(int i=0; i<n; i++){
    cout << ans[i] << " ";
  }
  
  cout << endl;
    
  return 0;
}