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
    int globalMax = 0;

    int calculateHeight(TreeNode* root){
        if(!root) return 0;

        int left = calculateHeight(root->left);
        int right = calculateHeight(root->right);

        globalMax = max(globalMax, left+right);

        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        calculateHeight(root);
        return globalMax;
    }
};
