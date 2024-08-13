#include<bits/stdc++.h>
using namespace std;
class Solution {
   private:
   void f(int ind,int t,vector<int>&c,vector<int>&d,vector<vector<int>>&ans)
    {
         if(t==0)
         {
            ans.push_back(d);
            return;
         }
         for(int i=ind;i<c.size();i++)
         {
            if(i>ind&&c[i]==c[i-1])continue;
            if(c[i]>t)break;
            d.push_back(c[i]);
            f(i+1,t-c[i],c,d,ans);
            d.pop_back();
         }
         
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>d;
        vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
         f(0,target,candidates,d,ans);
         return ans;
    }
};
