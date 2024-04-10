#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// int lsc(string &s,string&t,int i,int j,vector<vector<int>>&dp)
// {
//     if(i<0||j<0)return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     if(s[i]==t[j]) return 1+lsc(s,t,i-1,j-1,dp);
//     return dp[i][j]=max(lsc(s,t,i-1,j,dp),lsc(s,t,i,j-1,dp));
// }
    

    int minInsertions(string s) {
        int n=s.size();
        string t=s;
        reverse(s.begin(),s.end());
        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        vector<int>prv(n+1,0),cur(n+1,0);
        // for(int i=0;i<=n;i++)dp[i][0]=0;
        // for(int i=0;i<=n;i++)dp[0][i]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(s[i-1]==t[j-1]) cur[j]= 1+prv[j-1];
                else
                cur[j]=max(prv[j],cur[j-1]);
            }
            prv=cur;
        }

        int x=prv[n];
        return n-x;
    }
};