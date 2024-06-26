#include<bits/stdc++.h>
using namespace std;

int f(string s,int k)
{
    unordered_map<char,int> mp;
    int i=0,j=0,maxi=0;
    while(j<s.size())
    {
        mp[s[j]]++;
        while(mp.size()>k)
        {
            mp[s[i]]--;
            if(mp[s[i]]==0)
                mp.erase(s[i++]);
        }
        maxi=max(maxi,j-i+1);
        j++;
    }
    return maxi;
}