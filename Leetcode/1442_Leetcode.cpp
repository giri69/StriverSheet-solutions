#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size(),ans=0;
        vector<int>xora(n+1,0);
        for(int i=0;i<n;i++)
        {
            xora[i+1]=xora[i]^arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
               if(xora[i]==xora[j])
               {
                ans+=j-(i+1);
               }
            }
        }
        return ans;
    }
};