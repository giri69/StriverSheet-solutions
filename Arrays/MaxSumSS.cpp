#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
        {
            long long ans=0;
            for(int i=1;i<N;i++)
                ans = max(arr[i]+arr[i-1], ans);
            return ans;
        }
    };