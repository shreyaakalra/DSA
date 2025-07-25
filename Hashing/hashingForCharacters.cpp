// using hashing for characters.
// can use array for all since max chars are only 256 and array can handle that.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
  
  int n;
  cin >> n;
  
  vector<char> letters(n);
  for(int i=0; i<n; i++){
    cin >> letters[i];
  }
  
  // hashing if there are only lowercased letters, else just use n = 256;
  int hashh[26]={0};
  
  for(int i=0; i<n; i++){
    char ch = letters[i];
    hashh[ch - 'a']++;
  }
  
  for(int i=0; i<26; i++){
    cout << char('a'+i) << "-" << hashh[i] << endl;
  }
    
    return 0;
}