#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
struct TreeNode{
    TreeNode* right;
    TreeNode* left;
};
void inorder(TreeNode*root,vector<TreeNode*>&v)
{
    if(root==NULL)return;

    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);
}
TreeNode*f(vector<TreeNode*>&v,int i,int j)
{
    if(i>j)return NULL;
    int mid=(i+j)/2;
    TreeNode* node=v[mid];
    node->left=f(v,i,mid-1);
    node->right=f(v,mid+1,j);
    return node;
}
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*>v;
        inorder(root,v);
        return f(v,0,v.size()-1);
    }
};