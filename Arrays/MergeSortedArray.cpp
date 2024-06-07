#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m,j=0;
        while(i<nums1.size() && j<n)
        {
            nums1[i++]=nums2[j++];
        }
       
        sort(nums1.begin(),nums1.end());
    }
};