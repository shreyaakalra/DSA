// quick sort: 
#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& nums, int low, int high){
    if(low>=high) return;
    int pivot = nums[low];
    int i = low;
    int j = high;
    
    while(i<=j){
      while(nums[i]<pivot) i++;
      while(nums[j]>pivot) j--;
      
      if(i<=j){
        swap(nums[i], nums[j]);
        i++;
        j--;
      }
      
    }
    
    quickSort(nums, low, j);
    quickSort(nums, i, high);
    
}

int main(){
  
  int n;
  cin >> n;
  
  vector<int> num(n);
  
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  
  quickSort(num, 0, n-1);
  
  for(int i=0; i<n; i++){
    cout << num[i] << " ";
  }
  
  cout << endl;
    
  return 0;
}