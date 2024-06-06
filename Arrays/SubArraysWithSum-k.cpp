#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        int sum=0;int c=0;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
          int x=sum-k;
          c+=mp[x];
          mp[sum]++;

        }
        
        return c;
    }
};