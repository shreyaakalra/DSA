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
    int maxSum = INT_MIN;

    int dfs(TreeNode* root){
        if(!root) return 0;

        int left = max(0, dfs(root->left));
        int right = max(0, dfs(root->right));

        maxSum = max(maxSum, left+right+root->val);

        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxSum;
    }
};