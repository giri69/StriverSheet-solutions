#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
            unordered_map<int,int>mp;
            vector<int>ans;
        
           if(m<n)
           {
            for(auto it:nums1)
            {
                mp[it]++;
            }
            for(int i=0;i<n;i++)
            {
                if(mp.find(nums2[i])!=mp.end())
                {
                    if(mp[nums2[i]]>0)
                    ans.push_back(nums2[i]);
                    mp[nums2[i]]--;
                }
            }

           }
           else
           {
            for(auto it:nums2)
            {
                mp[it]++;
            }
            for(int i=0;i<m;i++)
            {
                if(mp.find(nums1[i])!=mp.end())
                {
                    if(mp[nums1[i]]>0)
                    ans.push_back(nums1[i]);
                    mp[nums1[i]]--;
                }
            }
           }
        return ans;
    }
};