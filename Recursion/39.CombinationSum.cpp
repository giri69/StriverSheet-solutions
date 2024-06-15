#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void f(int i,int t,vector<int>&candidates,vector<int>&p,vector<vector<int>>&ans)
{
    if(i==candidates.size())
    {
        if(t==0)
        {
        ans.push_back(p);
        }
        return;
    }
    if(candidates[i]<=t)
    {
     p.push_back(candidates[i]);
    f(i,t-candidates[i],candidates,p,ans);
    p.pop_back();
    }
    f(i+1,t,candidates,p,ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>p;
        f(0,target,candidates,p,ans);
        return ans;
    }
};