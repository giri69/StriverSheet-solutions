#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        sort(v.begin(),v.end());
        string x1=v[0],x2=v[v.size()-1];
        for(int i=0;i<min(x1.size(),x2.size());i++)
        {
            if(x1[i]!=x2[i])return ans;
            ans+=x1[i];
        }
        return ans;
    }
};