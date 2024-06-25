#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,c=0,maxi=INT_MIN;
        while(j<nums.size())
        {
            if(nums[j]!=1)c++;
                if(c>k)
                {
                   if(nums[i]==0)c--;
                    i++;
                }
            
            j++;
            maxi=max(maxi,j-i);
        }
        return maxi;
    }
};