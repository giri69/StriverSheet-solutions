#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int n1, int m1) {
        if(n1==m1)return 1;
        bool s=true;
        if(n1<0 && m1>=0)s=false;
        else if(m1<0 && n1>=0)s=false;
        long n=abs(n1);
        long m=abs(m1);
        long ans=0;
        while(n>=m)
        {
            int c=0;
            while(n>=(m<<(c+1)))
            {
                c++;
            }
               ans+=(1<<c);
               n-=(m<<c);
            
        }
         if(ans==(1<<31)&&s)
         {
             return INT_MAX;
         }
         if(ans==(1<<31)&&!s)
         {
             return INT_MIN;
         }
         return s?ans:ans*-1;
            
    }
};