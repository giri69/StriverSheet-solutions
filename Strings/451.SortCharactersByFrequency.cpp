#include<bits/stdc++.h>
using namespace std;
// char ch;int fr;
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        vector<pair<char,int>>v;
        for(auto[ch,fr]:mp)v.push_back({ch,fr});
        auto cmp = [&](pair<char,int>&a,pair<char,int>&b)
        {
             return a.second>b.second;
        };
        sort(v.begin(),v.end(),cmp);
        string ans="";
        for(auto x:v)
        {
            while(x.second--)
            {
                ans+=x.first;
            }
        }
        return ans;
    }
};


