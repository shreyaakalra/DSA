// preorder traversal : root left right:
// TC : O(n)
// SC : O(n)

#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* left;
  struct Node* right;
  
  Node(int val){
    data = val;
    left = right = nullptr;
  }
};

void preorder(Node* node){
  if(node==nullptr) return;
  cout << node->data << " ";
  preorder(node->left);
  preorder(node->right);
}

int main() 
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root ->right = new Node(3);
    root ->left->right = new Node(6);
    preorder(root); // 1 2 6 3
}