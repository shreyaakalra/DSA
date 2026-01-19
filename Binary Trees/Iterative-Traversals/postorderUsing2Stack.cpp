#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
  int val;
  struct TreeNode* left;
  struct TreeNode* right;
  
  TreeNode(int val){
    val = val;
    left = right = nullptr;
  }
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {

        if(!root) return{};

        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        vector<int> ans;

        s1.push(root);

        while(!s1.empty()){
            TreeNode* curr = s1.top();
            s1.pop();

            s2.push(curr);

            if(curr->left) s1.push(curr->left);
            if(curr->right) s1.push(curr->right);
        }

        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }

        return ans;
    }
};