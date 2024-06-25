#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        int c[3] ={-1,-1,-1},ans=0,i=0,j=0;
        int n = s.length();
        for(;j<n;j++) 
        {
            c[s[j] - 'a']=j;
            if(c[0]!=-1 && c[1]!=-1 && c[2]!=-1)
            ans=ans+(1+min(c[0],min(c[1],c[2])));
        }
        return ans;
    }
};