#include <bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* left;
  struct Node* right;
  
  Node(int value){
    data = value;
    left = nullptr;
    right = nullptr;
  }
  
};

void Inorder(Node* root){ // left root right
  if(root==nullptr) return;
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}

void Postorder(Node* root){ // left right root
  if(root==nullptr) return;
  Postorder(root->left);
  Postorder(root->right);
  cout << root->data << " ";
}

void Preorder(Node* root){ // root left right
  if(root==nullptr) return;
  cout << root->data << " ";
  Preorder(root->left);
  Preorder(root->right);
}

int main(){
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  Inorder(root);
  cout << endl;
  Postorder(root);
  cout << endl;
  Preorder(root);
  cout << endl;
}