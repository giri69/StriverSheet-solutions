#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSteps(string s) {
        int carry=0,ans=0;
        for(int i=s.length()-1;i>=1;i--)
        {
            if((s[i]-'0'+carry)%2==1)
            {
              ans+=2;
              carry=1 ;          
               }
              else
              ans+=1;
        }
        return carry+ans;
    }
};