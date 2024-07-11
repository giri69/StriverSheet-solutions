#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<int>open;
        vector<int>opp(n,-1);
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                open.push(i);
            }
            else if(s[i]==')')
            {
                int x=open.top();
                open.pop();
                opp[x]=i;
                opp[i]=x;
            }
        }
        int sig=1;
        string ans;
        for(int i=0;i<n;i+=sig)
        {
           if(s[i]=='('||s[i]==')')
           {
            i=opp[i];
            sig*=-1;
           }
           else
           {
              ans+=s[i];
           }
        }
        return ans;

    }
};