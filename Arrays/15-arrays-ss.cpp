#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int c=0;int x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(c==0){
                x=nums[i];
                c++;
            }
            else if(x==nums[i])c++;
            else
            c--;
        } return x;
    }
};