// sum of n numbers:
#include <bits/stdc++.h>
using namespace std;

void sum(int i, int n){
  if(i<1){
    cout << n;
    return;
  } 
  sum(i-1,n+i);
}

int main()
{
    int n;
    cin >> n;
    sum(n,0);
}