#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode*right;
    TreeNode*left;

    TreeNode(int _val){
           val=_val;
           right=nullptr;
           left=nullptr;
    }

};
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>mp;
        unordered_map<int,bool>hasParent;

        for(auto it:descriptions)
        {
            int parentVal=it[0],childVal=it[1],isLeft=it[2];
            TreeNode*parentNode=nullptr,*childNode=nullptr;

            if(mp.find(parentVal)==mp.end())parentNode= new TreeNode(parentVal);
            else parentNode=mp[parentVal];

            if(mp.find(childVal)==mp.end()) childNode= new TreeNode(childVal);
            else childNode=mp[childVal];

            if(isLeft)parentNode->left=childNode;
            else parentNode->right=childNode;

            hasParent[childVal]=true;
            mp[childVal]=childNode;
            mp[parentVal]=parentNode;
        }
        TreeNode* rootNode=nullptr;
        for(auto& [nodeVal, node]:mp)
        {
            if(!hasParent[nodeVal])rootNode=node;
        }
        return rootNode;
    }
};