#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        long long f=0,l=sqrt(c);
        while(f<=l)
        {
            if(f*f+(l*l)<c)f++;
            else if(f*f+(l*l)>c)l--;
            else return true;
        }
      return false;
    }
};