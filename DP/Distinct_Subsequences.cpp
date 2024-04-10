#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// int f(string &s,string &t,int i,int j,vector<vector<int>>&dp)
// {
//     if(j<0)return 1;
//     if(i<0)return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     if(s[i]==t[j])return (f(s,t,i-1,j-1,dp)+f(s,t,i-1,j,dp));
//     else
//     return dp[i][j]=f(s,t,i-1,j,dp);
// }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        // vector<vector<double>>dp(n+1,vector<double>(m+1,0));
        vector<double>prv(m+1,0),cur(m+1,0);
        cur[0]=prv[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
              if(s[i-1]==t[j-1])
              cur[j] = prv[j-1] + prv[j];

              else
               cur[j]=prv[j];
            }
            prv=cur;
        }

        return (int)prv[m];
    }
};