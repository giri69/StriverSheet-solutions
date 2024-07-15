#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        int tc=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1)
                {
                    tc++;
                }
            }
        }
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        int t=0;int cnt=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int time=q.front().second;
            t=max(t,time);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=row+drow[i];
                int ncol=col+dcol[i];
                if(nrow<0||nrow>=n||ncol<0||ncol>=m||grid[nrow][ncol]!=1) continue;
                grid[nrow][ncol]=2;
                cnt++;
                q.push({{nrow,ncol},time+1});
            }
        }
        return tc==cnt?t:-1;
    }
};