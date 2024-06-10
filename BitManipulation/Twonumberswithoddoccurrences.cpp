#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        int x=0;
        for(int i=0;i<N;i++)x^=Arr[i];
        int a=0,b=0;
        int r=(x&x-1)^x;
        for(int j=0;j<N;j++)
        {
            if((Arr[j]&r))a=a^Arr[j];
            else
            b=b^Arr[j];
        }
        if(b>a)return {b,a};
        else return {a,b};
        
    }
};

