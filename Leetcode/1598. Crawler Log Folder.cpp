#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int i=0;
        for( int it=0;it<logs.size();it++)
        {
            if(logs[it]=="../")
            {
                if(i!=0)i--;
               
            }
            else if(logs[it]=="./")continue;
            else
            {
                i++;
            }
        }
        return i;
    }
};