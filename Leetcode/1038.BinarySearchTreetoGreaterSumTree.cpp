#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
struct TreeNode{
    int val;
    TreeNode*right;
    TreeNode*left;
};
    int sum = 0;

    void traverse(TreeNode* root) {
        if (root) {
            traverse(root->right);  
            sum += root->val; 
            root->val = sum;  
            traverse(root->left);  
        }
    }

public:
    TreeNode* bstToGst(TreeNode* root) {
        traverse(root);
        return root;
    }
};