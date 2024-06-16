#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void f(int ind,string s,vector<string>&p,vector<vector<string>>&ans)
    {
        if(ind==s.size())
        {
            ans.push_back(p);
            return;
        }
        for(int i=ind;i<s.size();++i)
        {
            if(isp(s,ind,i))
            {
                
            p.push_back(s.substr(ind,i-ind+1));
            f(i+1,s,p,ans);
            p.pop_back();
            }
        }
    }
bool isp(string s,int f,int l)
{
   while(f<l)
   {
    if(s[f]!=s[l])return false;
    f++;l--;
   }
   return true;
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>p;
        f(0,s,p,ans);
        return ans;
    }
};