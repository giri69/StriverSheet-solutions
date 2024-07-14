#include<bits/stdc++.h>
using namespace std;
class Solutions {   
    public:
    void DFS(int s, vector<int> adj[],vector<int>&vis,vector<int>&ans)
  {
      vis[s]=1;
      ans.push_back(s);
      for(auto it:adj[s])
      {
          if(vis[it]==0)
          {
              DFS(it,adj,vis,ans);
          }
      }
      
  }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        vector<int>ans;
        DFS(0,adj,vis,ans);
        return ans;
    }
};