#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &num, int low, int mid, int high){
  vector<int> temp;
  int left = low;
  int right = mid+1;
  
  while(left<=mid && right<=high){
    if(num[left]<=num[right]){
      temp.push_back(num[left]);
      left++;
    }
    else{
      temp.push_back(num[right]);
      right++;
    }
  }
  
  while(left<=mid){
    temp.push_back(num[left]);
    left++;
  }
  
  while(right<=high){
    temp.push_back(num[right]);
    right++;
  }
  
  for(int i=low; i<=high; i++){
    num[i] = temp[i-low];
  }
}

void mergeSort(vector<int> &num, int low, int high){
  if(low>=high) return;
  int mid = (low+high)/2;
  mergeSort(num, low, mid);
  mergeSort(num, mid+1, high);
  merge(num, low, mid, high);
}

int main(){
  
  int n;
  cin >> n;
  
  vector<int> num(n);
  
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  
  mergeSort(num,0,n-1);
  
  for(int i=0; i<n; i++){
    cout << num[i] << " ";
  }
  
  cout << endl;
    
  return 0;
}