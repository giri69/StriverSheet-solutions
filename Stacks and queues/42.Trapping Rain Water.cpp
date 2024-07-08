#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int lm=height[0];
        int i=0;
        int j=height.size()-1;
        int rm=height[j];int ans=0;
        while(i<j)
        {
            if(lm<=rm)
            {
                 ans+=(lm-height[i]);
                 i++;
                 lm=max(lm,height[i]);
            }
            else
            {
               ans+=(rm-height[j]);
               j--;
               rm=max(rm,height[j]);
            }
        }
        return ans;
    }
};