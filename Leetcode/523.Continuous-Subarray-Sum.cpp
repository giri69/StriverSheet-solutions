#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int sum=0;
        mp[sum]=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=(sum+nums[i])%k;
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i+1;
            }
            else
            {
                if(i+1-mp[sum]>=2)return true;
            }
        }
        return false;
    }
};