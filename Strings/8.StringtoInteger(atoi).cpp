#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) 
    {
       int i=0;
       int si=1;
       long ans=0;
       while(s[i]==' ')i++;
       if(s[i]=='-')
       {
        si=-1;
        i++;
       }
       else if(s[i]=='+')i++;
       
       while(i<s.length())
       {
         if(s[i]>='0' && s[i]<='9')
         {
            ans=ans*10+(s[i]-'0');
           if(ans>INT_MAX && si==-1)return INT_MIN;
           else if(ans>INT_MAX && si==1)return INT_MAX;
           i++;
         }
         else break;
       }
       
       return (si*ans);
    }
};