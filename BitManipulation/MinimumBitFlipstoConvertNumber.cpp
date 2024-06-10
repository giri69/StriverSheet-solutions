#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minBitFlips(int start, int goal) {
        start=start^goal;
        goal=0;
        for(int i=0;i<32;i++)
        {
           if(start&(1<<i))goal++;
        }
        return goal++;
    }
};