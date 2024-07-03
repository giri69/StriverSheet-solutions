#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(nums.size()<4)return 0;
         int ans1=min((nums[n-4]-nums[0]),(nums[n-1]-nums[3]));
         int ans2=min((nums[n-3]-nums[1]),(nums[n-2]-nums[2]));
         return min(ans1,ans2);
    }
};