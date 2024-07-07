#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWaterBottles(int nb, int ne) {
        int ans=nb;
        while(nb>=ne)
        {
            ans+=nb/ne;
            int c=(nb/ne);
            c+=nb%ne;
            nb=c;
        }
        return ans;
    }
};


