#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int totalFruits(int N, vector<int> &s) {
        unordered_map<int,int>mp;
        int i=0,j=0,maxi=INT_MIN;
        while(j<N)
        {
            mp[s[j]]++;
             
             if(mp.size()>2)
             {
                 mp[s[i]]--;
                 if(mp[s[i]]==0)mp.erase(s[i]);
                 i++;
             }
             maxi=max(maxi,j-i+1);
             j++;
             
        }
        return maxi;
        
    }
};

