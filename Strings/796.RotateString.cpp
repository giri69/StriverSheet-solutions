#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        if (s.empty() && goal.empty()) return true; 

        int n = s.size();
        
        for (int start = 0; start < n; ++start) {
            int i = start, j = 0;
            while (j < n && s[i] == goal[j]) {
                i++,j++;
                if (i == n) i = 0; 
            }
            if (j == n) return true;
        }
        
        return false;
    }
};
