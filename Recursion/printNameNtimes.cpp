// print name n times
#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n){
  if(i==n) return;
  cout << "Shreya" << endl;
  printName(i+1,n);
}


int main(){
  string s;
  cin >> s;
  printName(0,5);
}