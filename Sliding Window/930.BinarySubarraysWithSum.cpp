#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int f(vector<int>&nums,int goal)
{
   int i=0,j=0,maxi=0,sum=0;
        unordered_map<int,int>mp;
        while(j<nums.size())
        {
            if(goal<0)return 0;

            sum+=nums[j];
            while(sum>goal)
            {
               sum-=nums[i++];
            }
                maxi+=j-i+1;
                j++;
           
        }
        return maxi;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return f(nums,  goal)-f(nums,goal-1);

    }
};