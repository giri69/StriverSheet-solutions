#include<bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
   bool f(vector<int>& bloomDay, int m, int k,int a)
    {
        int t=0;int c=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=a)c++;
            else
            c=0;
            if(c==k){
                t++;
                c=0;
            }
        }
        return(t>=m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) 
    {
        if((long)m*k>bloomDay.size())return -1;
        int l=1,r=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<r)
        {
            int mid=(l+r)/2;
            if(f(bloomDay,m,k,mid))
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }   
};