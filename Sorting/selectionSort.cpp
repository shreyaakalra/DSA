// selection sort: 

#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int>& nums){
  
    int n = nums.size();
    for(int i=0; i<n-1; i++){
      int mini = i;
    for(int j=i+1; j<n; j++){
      if(nums[j]<nums[mini]){
        mini = j;
        }
      }
      
      int temp = nums[i];
      nums[i] = nums[mini];
      nums[mini] = temp; 
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
  
  vector<int> ans = selectionSort(num);
  
  for(int i=0; i<n; i++){
    cout << ans[i] << " ";
  }
  
  cout << endl;
    
  return 0;
}