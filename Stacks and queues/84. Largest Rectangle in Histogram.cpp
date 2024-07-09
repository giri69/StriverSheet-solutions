#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
       vector<int>lf(n),rt(n);
       stack<int>st;
       for(int i=0;i<n;i++)
       {
          while(!st.empty()&&heights[st.top()]>=heights[i])
          {
          st.pop();
          }
          if(st.empty())lf[i]=0;
          else
          lf[i]=st.top()+1;
          st.push(i);
       }
       while(!st.empty())st.pop();

       for(int i=n-1;i>=0;i--)
       {
        while(!st.empty()&&heights[st.top()]>=heights[i])
        {

        st.pop();
        }
       if(st.empty())rt[i]=n-1;
       else rt[i]=st.top()-1;
       st.push(i);
       }
       int maxi=0;
       for(int i=0;i<n;i++)
       {
         maxi=max(maxi,heights[i]*(rt[i]-lf[i]+1));
       }
       return maxi;
    }
};