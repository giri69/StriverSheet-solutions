#include<bits/stdc++.h>
using namespace std;
// class Solution {
// public:
// bool f(int i,int j,string &s,string &p)
// {
//     if(i<0&&j<0)return true;
//     if(j<0&&i>=0) return false;
//     if(i<0 && j>=0)
//     {
//         for(int k=0;k<j;k++)
//         {

//         if(p[k]!='*')return false;
//         }
//         return true;
//     }

//     if(s[i]==p[j]||p[j]=='?') return f(i-1,j-1,s,p);
//     if(p[j]=='*') return (f(i-1,j,s,p)|f(i,j-1,s,p));
//     return false;
// }
//     bool isMatch(string s, string p) {
//         return f(s.size()-1,p.size()-1,s,p);
//     }
// };



class Solution {
public:
    bool solve(int ind1,int ind2,string &s,string &p,vector<vector<int>> &dp){
        if(ind1<0 && ind2<0) return true;
        if(ind2<0) return false;
        if(ind1<0){
            for(int i=0;i<=ind2;i++){
                if(p[i]!='*') return false;
            }
            return true;
        }
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        if(s[ind1]==p[ind2] || p[ind2]=='?') return dp[ind1][ind2]=solve(ind1-1,ind2-1,s,p,dp);
        else if(p[ind2]=='*'){
            return dp[ind1][ind2]=solve(ind1-1,ind2,s,p,dp) || solve(ind1,ind2-1,s,p,dp);
        }
        return dp[ind1][ind2]=false;
    }
    bool isMatch(string s, string p) {
        int n=s.length();
        int m=p.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(n-1,m-1,s,p,dp);
    }
};