#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   void f(int ind,int sum,int k,int n,vector<int>&s,vector<vector<int>>&ans)
   {
    if(k==0&&sum==n)
    {
        ans.push_back(s);
        return;
    }
    if(sum>n)return;
   for(int i=ind;i<=9;i++)
   {
    if(i>n)break;
    s.push_back(i);
    f(i+1,sum+i,k-1,n,s,ans);
    s.pop_back();
   }
   }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>s;
        f(1,0,k,n,s,ans);
        return ans;
    }
};