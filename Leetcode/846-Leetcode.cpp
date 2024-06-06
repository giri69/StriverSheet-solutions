// Hand of Straights

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int>mp;
        for(int i=0;i<hand.size();i++)mp[hand[i]]++;
        if(hand.size()%groupSize!=0)return false;
        for(auto [h,freq]:mp)
        {
            if(freq==0)continue;
            while(freq--)
            {
                for(int i=h;i<h+groupSize;i++)
                {
                    if(mp[i]==0)return false;
                
                    mp[i]--;
                }
            }
        }
            return true;
    }
};
