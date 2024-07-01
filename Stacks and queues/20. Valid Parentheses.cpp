#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> k;
        int c=0;
            if(s[0]=='}'||s[0]==']'||s[0]==')')
            return false;
        for(int i=0;i<n;i++)
        {
             if(k.empty())
             {
                 if(s[i]=='}'||s[i]==']'||s[i]==')')
                 return false;
             }

            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                k.push(s[i]);
            }
            else
            {
                if(!k.empty())
                {
                  if((k.top()=='('&&s[i]==')')||(k.top()=='['&&s[i]==']')||(k.top()=='{'&&s[i]=='}'))
                  k.pop();
                  else
                  return false;
                }
                else
                return false;
            }
            
        }
        if(k.empty())
        return true;
        else
        return false;
    }
};