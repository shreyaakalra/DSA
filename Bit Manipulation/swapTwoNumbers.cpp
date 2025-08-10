// swapping 2 numbers using bit manipulation:

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a=10, b=15;
  a = a^b;
  b = a^b; // b = a^b => b = (a^b)^b, we know that b^b=1 => b = a^0, we know that x^0=x, hence b=a.
  a = a^b; // similarly, a=b.
  
  cout <<"a:" <<  a << endl << "b:" << b;
}