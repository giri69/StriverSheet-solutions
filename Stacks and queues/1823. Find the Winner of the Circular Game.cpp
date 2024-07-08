#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
    vector<int> v(n);
        
        for (int i = 0; i < n; ++i) {
            v[i] = i + 1;
        }
        
        int idx = 0;  
        while (v.size() > 1) {
            idx = (idx + k - 1) % v.size();  
            v.erase(v.begin() + idx);      
        }
        
        return v[0]; 
    }
};