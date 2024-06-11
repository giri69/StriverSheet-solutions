#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<arr1.size();i++)
        {
           mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++)
        {
            int x=mp[arr2[i]];
            while(x--)
            {
                ans.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);
            
        }
         for(auto it : mp)
        {   
            int freq=it.second;
            for(int i=0;i<freq;i++)
                ans.push_back(it.first);
        }
         
        return ans;
    }
};