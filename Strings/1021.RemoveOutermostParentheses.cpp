#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeOuterParentheses(string s) {
        int openP = 0, n = s.size();
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                if(openP > 0) ans += s[i];
                openP++;
            }else{
                openP--;
                if(openP > 0) ans += s[i];
            }
        }

        return ans;
    }
};