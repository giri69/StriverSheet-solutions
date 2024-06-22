#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;int sum=0,ans=0;mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=(nums[i]%2)?1:0;
             ans+=mp[sum-k];
             mp[sum]++;
        }
        return ans;
    }
};