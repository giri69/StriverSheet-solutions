#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int i=0,j=0;int maxi=0;
        unordered_set<char,int>mp;
        while(j<s.size())
        {
            if(mp.find(s[j])==mp.end())
            {
                mp.insert(s[j++]);
                maxi=max(maxi,j-i);
            }
            else
            {
                mp.erase(s[i++]);
            }
        }
        return maxi;
    }
};