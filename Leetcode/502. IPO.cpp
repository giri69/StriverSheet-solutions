#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>>vp;
        for(int i=0;i<profits.size();i++)
        {
            vp.push_back({capital[i], profits[i]});
        }
        sort(vp.begin(),vp.end());
        priority_queue<int>pq;
        int j=0;
        while(j<profits.size()&&vp[j].first<=w)
        {
            pq.push(vp[j++].second);
        }
        while(!pq.empty()&&k-->0)
        {
            w+=pq.top();
            pq.pop();
            while(j<profits.size()&& vp[j].first<=w)
            {
               pq.push(vp[j++].second);
            }
        }
        return w;

    }
};