#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool f(vector<vector<char>>& board, string word,int ind,int i,int j,int m,int n)
{
    if(ind==word.size())
    {
        return true;
    }
    if(i<0||j<0||i>=n||j>=m||board[i][j]!=word[ind]||board[i][j]=='!')return false;

    char c=board[i][j];
    board[i][j]='!';
    bool top=f(board,word,ind+1,i+1,j,m,n);
    bool bt=f(board,word,ind+1,i-1,j,m,n);
    bool r=f(board,word,ind+1,i,j+1,m,n);
    bool l=f(board,word,ind+1,i,j-1,m,n);
    board[i][j]=c;
    return top||bt||r||l;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();int ind=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(word[ind]==board[i][j])
                {
                    if(f(board,word,ind,i,j,m,n))return true;
                }
            }
        }
        return false;
    }
};