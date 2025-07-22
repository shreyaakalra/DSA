#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int left, int right){
  if(left>=right) return;
  
  int temp = arr[left];
  arr[left] = arr[right];
  arr[right] = temp;
  
  reverseArray(arr, left+1, right-1);
}

int main() 
{
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    
    reverseArray(arr, 0, n-1);
    
    for(int i=0; i<n; i++){
      cout << arr[i] << " ";
    }
    
    cout << endl;
    
}