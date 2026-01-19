// postorder traversal : left right root
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

void postorder(Node* node){
  if(node==nullptr) return;
  postorder(node->left);
  postorder(node->right);
  cout << node->data << " ";
}

int main() 
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root ->right = new Node(3);
    root ->left->right = new Node(6);
    postorder(root); // 6 2 3 1
}
