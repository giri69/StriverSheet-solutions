#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int sum=0;
        int c=0;
        mp[sum]++;
        for(int i=0;i<nums.size();i++)
        {
            sum=(sum+nums[i]%k+k)%k;
            c+=mp[sum];
            mp[sum]++;
        }
        return c;
    }
};