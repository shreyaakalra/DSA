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
        vector<int> ans;
        if(!root) return ans;

        stack<TreeNode*> s;

        TreeNode* curr = root;
        TreeNode* prev = nullptr;

        while(curr!=nullptr ||!s.empty()){
            if(curr!=nullptr){
                s.push(curr);
                curr = curr->left;
            }
            else{
                TreeNode* peekNode = s.top();

                if(peekNode->right!=nullptr && prev!=peekNode->right){
                    curr = peekNode->right;
                }
                else{
                    ans.push_back(peekNode->val);
                    prev = peekNode;
                    s.pop();
                }
            }
        }

        return ans;
    }
};