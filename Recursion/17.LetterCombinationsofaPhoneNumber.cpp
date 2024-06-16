#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
  void f(int n,string x,vector<string>&opt,vector<string>&ans){
    if(n==0)
    {
        ans.push_back(x);
        return;
    }
    int p=n%10;
    string o=opt[p];
    for(int i=0;i<o.size();i++)
    {
        f(n/10,o[i]+x,opt,ans);
    }
  }
    vector<string> letterCombinations(string digits) {
        int n=0;
        vector<string> x;
        if(digits.size()==0)return x;
        for(int i=0;i<digits.size();i++)
        {
            n=n*10+(digits[i]-'0');
        }
        vector<string>opt={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string s="";
        f(n,s,opt,x);
        return x;
    }
};