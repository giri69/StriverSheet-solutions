#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// int f(string &s,string &t,int i,int j)
// {
//     if(i<0) return j+1;
//     if(j<0) return i+1;
//     if(s[i]==t[j])return f(s,t,i-1,j-1);
//     return 1+min(f(s,t,i-1,j),min(f(s,t,i-1,j-1),f(s,t,i,j-1)));
// }
//     int minDistance(string s, string t) {
//         return f(s,t,s.size()-1,t.size()-1);
//     }
// };






// int f(string &s,string &t,int i,int j,vector<vector<int>>&dp)
// {
//     if(i<0) return j+1;
//     if(j<0) return i+1;
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(s[i]==t[j])return f(s,t,i-1,j-1,dp);
//     return dp[i][j]= 1+min(f(s,t,i-1,j,dp),min(f(s,t,i-1,j-1,dp),f(s,t,i,j-1,dp)));
// }
//     int minDistance(string s, string t) {
//         int n=s.size();
//         int m=t.size();
//         vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
//         return f(s,t,s.size()-1,t.size()-1,dp);
//     }
// };




//     int minDistance(string s, string t) {
//         int n=s.size();
//         int m=t.size();
//         vector<vector<int>>dp(n+1,vector<int>(m+1,0));
//         for(int i=0;i<=m;i++)
//         {
//             dp[0][i]=i;
//         }
//         for(int i=0;i<=n;i++)
//         {
//             dp[i][0]=i;
//         }
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                  if(s[i-1]==t[j-1]) dp[i][j]= dp[i-1][j-1];
//                  else
//                   dp[i][j]= 1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
//             }
//         }

//         return dp[n][m];
//     }
// };



    int minDistance(string s, string t) {
        int n=s.size();
        int m=t.size();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        vector<int>prv(m+1,0),cur(m+1,0);
        for(int i=0;i<=m;i++)
        {
            prv[i]=i;
        }
        for(int i=1;i<=n;i++)
        {
            cur[0]=i;
            for(int j=1;j<=m;j++)
            {
                 if(s[i-1]==t[j-1]) cur[j]= prv[j-1];
                 else
                  cur[j]= 1+min(prv[j],min(prv[j-1],cur[j-1]));
            }
            prv=cur;
        }

        return prv[m];
    }
};
