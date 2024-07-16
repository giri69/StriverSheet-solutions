#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    bool dfs(int i,int col,vector<int>&vis,vector<int>adj[])
    {
        vis[i]=col;
        for(auto it:adj[i])
        {
            if(vis[it]==-1)
            {
              if(dfs(it,!col,vis,adj)==false)return false;
            }
            else
            {
               if(vis[it]==col)return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(auto it:graph[i])
            {
                adj[i].push_back(it);
            }
        }
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(dfs(i,0,vis,adj)==false)return false;
            }
        }
      return true;
    }
};