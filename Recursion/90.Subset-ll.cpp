#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void f(int ind,vector<int>&nums,vector<int>&p,vector<vector<int>>&ans)
{
    ans.push_back(p);
    for(int i=ind;i<nums.size();i++){
    if(i!=ind&&nums[i]==nums[i-1])continue;
    p.push_back(nums[i]);
    f(i+1,nums,p,ans);
    p.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>p;
        sort(nums.begin(),nums.end());
        f(0,nums,p,ans);
        return ans;
    }
};