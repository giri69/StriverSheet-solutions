/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getTreeTraversal(TreeNode *root){
 vector<vector<int>>ans;
    stack<pair<TreeNode*,int>>st;
    st.push({root,1});
    vector<int>pre,ino,post;
    if(root==NULL)return ans;
    while(!st.empty())
    {
        auto it=st.top();
        st.pop();
        if(it.second==1)
        {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL)
            {
                it.first=it.first->left;it.second=1;
                st.push(it);
            }
        }
        else if(it.second==2)
        {
            ino.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL)
            {
                it.first=it.first->right;it.second=1;
                st.push(it);
            }
        }
        else{
            post.push_back(it.first->data);
        }
    }
    ans.push_back(ino);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;

}