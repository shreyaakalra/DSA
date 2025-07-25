// using hashing for numbers.
// cant be used for more that 1e7.
// use map/unorderedmaps in that case.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  int n;
  cin >> n;
  
  vector<int> num(n);
  for(int i=0; i<n; i++){
    cin >> num[i];
  }
  
  int hashh[n+1]={0};
  
  for(int i=0; i<n; i++){
    hashh[num[i]]++;
  }
  
  for(int i=0; i<=n; i++){
    cout << i << "-" << hashh[i] << endl;
  }
    
    return 0;
}