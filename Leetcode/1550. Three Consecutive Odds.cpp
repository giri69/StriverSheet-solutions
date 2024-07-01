#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i=0,j=2;
        while(j<arr.size())
        {
            if(arr[i]%2==1&&arr[i+1]%2==1&&arr[j]%2==1)return true;
            i++;j++;
        }
        return false;
    }
};