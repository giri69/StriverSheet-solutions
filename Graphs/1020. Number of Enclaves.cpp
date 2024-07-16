#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    void dfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid,int drow[],int dcol[])
    {
        int n=grid.size();
        int m=grid[0].size();
      vis[i][j]=1;
      grid[i][j]=0;
      for(int k=0;k<4;k++)
      {
        int nrow=i+drow[k];
        int ncol=j+dcol[k];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
        {
            dfs(nrow,ncol,vis,grid,drow,dcol);
        }
      }

    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++)
        {
            if(!vis[0][j] && grid[0][j]==1)
            {
              dfs(0,j,vis,grid,drow,dcol);
            }
            if(!vis[n-1][j] && grid[n-1][j]==1)
            {
               dfs(n-1,j,vis,grid,drow,dcol);
            }
        }
        for(int i=0;i<n;i++)
        {
           if(!vis[i][0] && grid[i][0]==1)
           {
            dfs(i,0,vis,grid,drow,dcol);
           }
           if(!vis[i][m-1] && grid[i][m-1]==1)
           {
            dfs(i,m-1,vis,grid,drow,dcol);
           }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])ans++;
            }
        }
       return ans;
    }
};