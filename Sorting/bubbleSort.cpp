// bubble sort: 
#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int>& nums){
    int n = nums.size();
      for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
          if(nums[j]>nums[j+1]){
            int temp = nums[j+1];
            nums[j+1] = nums[j];
            nums[j] = temp;
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
  
  vector<int> ans = bubbleSort(num);
  
  for(int i=0; i<n; i++){
    cout << ans[i] << " ";
  }
  
  cout << endl;
    
  return 0;
}