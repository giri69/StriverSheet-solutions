#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int>st(26,0);
        int i=0,j=0,c=0,maxi=INT_MIN;
        while(j<s.size())
        {
            st[s[j]-'A']++;
            c=max(c,st[s[j]-'A']);
            if(((j-i+1)-c)>k)
            {
                st[s[i]-'A']--;
                i++;
            }
           maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }
};