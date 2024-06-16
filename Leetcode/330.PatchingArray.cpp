#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int s=nums.size();
        long long int c=0,m=0,i=0;
        while(m<n)
        {
            if(i<s&&m+1>=nums[i])
            {
                m+=nums[i];
                i++;
            }
            else
            {
                c++;
                m+=(m+1);
            }
        }
        return c;
    }
};