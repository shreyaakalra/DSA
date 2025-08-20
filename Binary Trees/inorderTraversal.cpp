// inorder traversal : left root right
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

void inorder(Node* node){
  if(node==nullptr) return;
  inorder(node->left);
  cout << node->data << " ";
  inorder(node->right);
}

int main() 
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root ->right = new Node(3);
    root ->left->right = new Node(6);
    inorder(root); // 2 6 1 3
}
