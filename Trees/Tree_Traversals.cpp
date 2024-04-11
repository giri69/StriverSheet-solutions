#include<bits/stdc++.h>
using namespace std;
 
// 144. Binary Tree Preorder Traversal
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int>nodes;
    preorder(root,nodes);
    return nodes;
}
private:
void preorder(TreeNode* root, vector<int>& nodes){
    if(root==NULL){
        return;
    }
    nodes.emplace_back(root->val);
    preorder(root->left, nodes);
    preorder(root->right, nodes);
}
};


// 94. Binary Tree Inorder Traversal
class Solution {
public:
     
    void inorder(TreeNode *root,vector<int>&temp){
        if(!root)return;
        inorder(root->left,temp);
        temp.emplace_back(root->val);
        inorder(root->right,temp);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>temp2;
        inorder(root,temp2);
        return temp2;
    }
  
};




// 145. Binary Tree Postorder Traversal
class Solution {
public:
void postorder(TreeNode*root,vector<int>&nodes)
{
    if(root==NULL)return;
    postorder(root->left,nodes);
    postorder(root->right,nodes);
    nodes.emplace_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>nodes;
        postorder(root,nodes);
        return nodes;
    }
};