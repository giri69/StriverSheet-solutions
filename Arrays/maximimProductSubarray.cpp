#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
         double  maxi=INT_MIN;
        double p=1,s=1;
        for (int i = 0; i < nums.size(); i++) {
            if (p== 0) p = 1;
            if (s == 0) s = 1;
            p= p*nums[i];
            s= s*nums[nums.size() - i - 1];
            maxi = max(maxi, max(p, s));
        }
        return (int)maxi;
    }
};