#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
#define mod 1000000007
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> lf(n,0),rt(n,0);
        stack<pair<int,int>>st1,st2;

        for(int i=0;i<n;i++)
        {
            int c=1;
            while(!st1.empty()&&st1.top().first>arr[i])
            {
                 c+=st1.top().second;
                 st1.pop();
            }
             st1.push({arr[i],c});
             lf[i]=c;
        }
        for(int i=n-1;i>=0;i--)
        {
            int c=1;
            while(!st2.empty()&& st2.top().first>=arr[i])
            {
                 c+=st2.top().second;
                 st2.pop();
            }
             st2.push({arr[i],c});
             rt[i]=c;
        }
            int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=(ans+(arr[i]*(long long)(lf[i]*rt[i])%mod)%mod)%mod;
        }

        return ans;
    }
    
};