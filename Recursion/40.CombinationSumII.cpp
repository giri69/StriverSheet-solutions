#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void f(int ind,int t,vector<int>&nums,vector<int>&p,vector<vector<int>>&ans)
{
   
        if(t==0)
        {
        ans.push_back(p);
        return;
        }  
    for(int i=ind;i<nums.size();i++)
    {
       if(i>ind&&nums[i]==nums[i-1])continue;
       if(nums[i]>t)break;
        p.push_back(nums[i]);
        f(i+1,t-nums[i],nums,p,ans);
        p.pop_back();
       
    }
}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>p;
        sort(nums.begin(),nums.end());
        f(0,target,nums,p,ans);
        return ans;
    }
};