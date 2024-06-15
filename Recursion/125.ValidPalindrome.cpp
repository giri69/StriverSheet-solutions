#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
       int i=0;
       int j=s.size()-1;
       while(i<s.length())
        {
            if(!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if(!isalnum(s[j]))
            {
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j]))
            {
                return 0;
            }
            else
            {
                i++;
                j--;
            }
        }
        
            return 1; 
    }
};