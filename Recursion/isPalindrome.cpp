#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int left, int right) {
    if (left >= right) return true;
    if (s[left] != s[right]) return false;
    return isPalindrome(s, left + 1, right - 1);
}

int main() {
    string s;
    cin >> s;

    int n = s.length();
    
    cout <<  isPalindrome(s,0,n-1) << endl;
}