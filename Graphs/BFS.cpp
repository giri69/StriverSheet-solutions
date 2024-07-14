#include<bits/stdc++.h>
using namespace std;
class Solutions {   
    public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        vector<int>ans;
        vector<int>vis(V,0);
        int start=0;
        q.push(start);
        vis[0]=1;
        while(!q.empty()){
           int node=q.front();
           ans.push_back(node);
           q.pop();
           for(auto it:adj[node])
           {
               if(vis[it]==0)
               {
               q.push(it);
               vis[it]=1;
               }
           }
        }
        return ans;
    }
};