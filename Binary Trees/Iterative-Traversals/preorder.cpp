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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr) return ans;
        stack<TreeNode*> st;
        st.push(root);

        while(st.size()!=0){
            TreeNode* node = st.top();
            st.pop();

            ans.push_back(node->val);

            if(node->right){
                st.push(node->right);
            }

            if(node->left){
                st.push(node->left);
            }

        }

        return ans;
    }
};