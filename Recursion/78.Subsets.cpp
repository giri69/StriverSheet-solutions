#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void f(vector<int>&x,int i,vector<int>& path,vector<vector<int>>&ans)
{
   if(x.size()==i){
    ans.push_back(path);
    return;
   }
   path.push_back(x[i]);
   f(x,i+1,path,ans);
   path.pop_back();
   f(x,i+1,path,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>s;
          f(nums,0,s,ans);

        return ans;
    }
};