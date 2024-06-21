#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int i=0,n=s.size();
        string ans;
        while(i<n)
        {
            while(s[i]==' '&&i<n)i++;
            if(i>=n)break;
            int j=i+1;
            while(j<n && s[j]!=' ')j++;
            string x="";
            x=s.substr(i,j-i);
            if(ans.size()==0){
                ans+=x;
            }
            else
            ans=x+" "+ans;
            i=j+1;

        }
        return ans;
    }
};