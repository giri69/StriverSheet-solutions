#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
              if(nums[i]==1)
              {
                c++;
                maxi=max(maxi,c);
              }
              else
              c=0;
        }
        return maxi;
    }
};