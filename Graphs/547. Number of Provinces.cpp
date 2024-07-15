#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
            vis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            dfs(it,adj,vis);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<int>adj[n];
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1 && i!=j)
                {
                   adj[i].push_back(j);
                   adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
               cnt++;
               dfs(i,adj,vis);
            }
        }
        return cnt;
    }
};