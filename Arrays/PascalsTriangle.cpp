#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
 int ff(int n,int m)
{
   long long res=1;
   for(int i=0;i<m;i++)
   {
    res*=(n-i);
    res=res/(i+1);
   }
   return (int)res;
}
    vector<vector<int>> generate(int n) {
        vector<vector<int>>p;
        for(int i=0;i<n;i++)
        {
            vector<int>ans;
            ans.push_back(1);
            for(int j=1;j<=i;j++)
            {
              int x=ff(i,j);
              ans.push_back(x);
            }
            p.push_back(ans);
            
        }
        return p;
    }
};