#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return f(nums,k)-f(nums,k-1);
    }
   

    int f(vector<int>& nums,int k)
    {
         int i=0,j=0,maxi=0;
         unordered_map<int,int>mp;
         while(j<nums.size())
         {
            mp[nums[j]]++;
            while(mp.size()>k)
            {
               mp[nums[i]]--;
               if(mp[nums[i]]==0)mp.erase(nums[i]);
               i++;
            }
            maxi+=j-i+1;
            j++;
         }
         return maxi;
    }
   
        
    

};