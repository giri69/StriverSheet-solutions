#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root==NULL)return ans;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            Node* node=it.first;
            if(mp.find(it.second)==mp.end())mp[it.second]=node->data;
            if(node->left)q.push({node->left,it.second-1});
            if(node->right)q.push({node->right,it.second+1});
            
        }
        for(auto it: mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }

};