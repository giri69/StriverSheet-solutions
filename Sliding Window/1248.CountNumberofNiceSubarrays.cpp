#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int f(vector<int>&nums,int k)
{
   int i=0,j=0,maxi=0,sum=0;
        while(j<nums.size())
        {
            if(k<0)return 0;
            sum+=nums[j]%2;
            while(sum>k)
            {
              sum-=nums[i++]%2;
            }
            maxi+=j-i+1;
            j++;

        }
        return maxi;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};