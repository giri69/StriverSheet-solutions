#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool isf(int i,int j,int n,vector<string>&board)
   {
     int dr=i,dj=j;
     while(i>=0&&j>=0)
     {
        if(board[i][j]=='Q')return false;
        i--;j--;
     }
     i=dr,j=dj;
     while(j>=0)
     {
        if(board[i][j]=='Q')return false;
        j--;
     }
     j=dj,i=dr;
     while(i<n&&j>=0)
     {
        if(board[i][j]=='Q')return false;
        i++,j--;
     }
return true;
     
   }
  void f(int c,int n,vector<string>&board,vector<vector<string>>&ans)
  {
    if(c==n){
        ans.push_back(board);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(isf(i,c,n,board)){
            board[i][c]='Q';
            f(c+1,n,board,ans);
            board[i][c]='.';
        }
    }
  }
    vector<vector<string>> solveNQueens(int n) {
       vector<string>board(n);
       vector<vector<string>>ans;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        f(0,n,board,ans);
        return ans;
    }
};