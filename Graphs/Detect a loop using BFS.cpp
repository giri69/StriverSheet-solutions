
#include <bits/stdc++.h>
using namespace std;


class Solution {
    private:
    bool f(int src,vector<int>adj[],int vis[])
    {
       queue<pair<int,int>>q;
       q.push({src,-1});
       vis[src]=1;
       while(!q.empty())
       {
           int node=q.front().first;
           int parent=q.front().second;
           q.pop();
           for(auto it:adj[node])
           {
               if(vis[it]==0)
               {
                  vis[it]=1;
                  q.push({it,node});
               }
               else
               {
                   if(it!=parent)return true;
               }
           }
       }
       return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
       int vis[V]={0};
       for(int i=0;i<V;i++)
       {
           if(vis[i]==0)
           {
               if(f(i,adj,vis))return true;
           }
       }
       return false;
    }
};

