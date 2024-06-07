#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& x) {
        vector<vector<int>>ans;
       for(int i=0;i<x.size();i++)
       {
        if(ans.empty()||x[i][0]>ans.back()[1])
        {
            ans.push_back(x[i]);
        }
        else
        {
           ans.back()[1]=max(ans.back()[1],x[i][1]);
        }
       }
       return ans;
    }
};