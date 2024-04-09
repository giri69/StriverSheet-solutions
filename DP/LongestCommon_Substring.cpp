//  LeetCode "1143. Longest Common Subsequence"

class Solution {
public:

    int longestCommonSubsequence(string s, string t) 
    {
        int n=s.size();int m=t.size();
        vector<vector<int>>dp(s.size()+1,vector<int>(t.size()+1,-1));
        for(int j=0;j<=m;j++) dp[0][j]=0;
        for(int j=0;j<=n;j++) dp[j][0]=0;

          for(int i=1;i<=n;i++)
          {
            for(int j=1;j<=m;j++)
            {
                if(i==0||j==0)
                {
                    dp[i][j]=0;
                }
                else
                {
                     if(s[i-1]==t[j-1]) dp[i][j]= 1+dp[i-1][j-1];
                     else
                     dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
          }
          return dp[n][m];
    }
};

// used a n*m matrix to solve the lcs problem using time complexity O(n*m) and space complexity of (n*m)

