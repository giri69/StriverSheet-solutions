#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=0,e1=INT_MIN,e2=INT_MIN;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(c1==0 && nums[i]!=e2)
            {
                c1++;
                e1=nums[i];
            }
            else if(c2==0 && nums[i]!=e1)
            {
                c2++;
                e2=nums[i];
            }
           else if(nums[i]==e1)c1++;
           else if(nums[i]==e2)c2++;
           else if(nums[i]!=e1 && nums[i]!=e2)
           {
            c1--;c2--;
           }
        }
        c1=0,c2=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==e1)c1++;
            if(nums[i]==e2)c2++;
        }
        int mini=(int)(n/3)+1;
        if(c1>=mini)ans.push_back(e1);
        if(c2>=mini)ans.push_back(e2);
        return ans;
    }
};