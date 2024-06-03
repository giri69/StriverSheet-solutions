#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        int ans=0;
       while(i<s.size())
       {
        if(t[j]==s[i])
        {
            i++,j++;
        }
        else
        {
            i++;
        }
       }
       if(j<t.size())ans=ans+t.size()-j;
       return ans;
    }
};