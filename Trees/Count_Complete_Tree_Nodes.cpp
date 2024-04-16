#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int heightl(TreeNode* node)
{
    int h=0;
    while(node){
        h++;
        node=node->left;
    }
    return h;
}
int heightr(TreeNode* node)
{
    int h=0;
    while(node){
        h++;
        node=node->right;
    }
    return h;
}
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int l=heightl(root);
        int r=heightr(root);
        if(l==r)return pow(2,l)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};