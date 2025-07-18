// sum of n numbers:
#include <bits/stdc++.h>
using namespace std;

int sum(int i, int n){
  if(i>n) return 0;
  return i+sum(i+1,n);
}

int main() 
{
    int n;
    cin >> n;
    cout << sum(1,n);
}