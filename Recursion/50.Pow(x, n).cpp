#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, long n) {
        bool s=true;
        if(n<0)s=false;
        n=abs(n);
        double ans=1;
        while(n>0)
        {
           if(n%2==1)
           {
              ans=ans*x;
              n=n-1;
           }
           else
           {
            x=x*x;
            n=n/2;
           }
        }
        return s?ans:1/ans;
    }
};