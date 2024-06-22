#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int beauty(vector<int> &mapy) {
        int mf = INT_MIN; 
        int lf = INT_MAX; 
        
        for(int i = 0; i < 26; i++) {
            if(mapy[i] > 0) {
                if(mapy[i] > mf) {
                    mf = mapy[i];
                }
                if(mapy[i] < lf) {
                    lf = mapy[i];
                }
            }
        }
        
        return (mf - lf);
    }

    int beautySum(string &s) {
        int res = 0;
        
        for(int i = 0; i < s.length(); i++) {
            vector<int> mapy(26, 0);
            for(int j = i; j < s.length(); j++) {
                mapy[s[j] - 'a']++;
                res += beauty(mapy);
            }
        }
        
        return res;
    }
};