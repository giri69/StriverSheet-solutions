#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        int c=0,maxi=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='(')c++;
           else if(s[i]==')')c--;
           maxi=max(maxi,c);
       }
       return maxi;
    }
};