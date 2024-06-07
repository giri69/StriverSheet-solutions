#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>&a,int l,int m, int r)
    {
        int c=0;
        vector<int>temp;
        int i=l,j=m+1;
        while(i<=m&&j<=r)
        {
            if(a[i]<=a[j])
            {
                temp.push_back(a[i++]);
            }
            else
            temp.push_back(a[j++]);
        }
        while(i<=m)temp.push_back(a[i++]);
        while(j<=r)temp.push_back(a[j++]);
        for(int k=l;k<=r;k++)
        {
            a[k]=temp[k-l];
        }
    }
    int ff(vector<int>&a,int l,int m, int r)
    {
        int c=0;int x=m+1;
        for(int i=l;i<=m;i++)
        {
            while( x<=r && (long long)a[x]*2 < a[i])x++;
            c+=x-(m+1);
        }
        return c;
    }
    int mergesort(vector<int>&a,int l,int r)
    {
        int c=0;
        if(l>=r)return c;
        int m=(l+r)/2;
       c+= mergesort(a,l,m);
       c+= mergesort(a,m+1,r);
       c+=ff(a,l,m,r);
        merge(a,l,m,r);
        return c;
    }
    int reversePairs(vector<int>& a) {
       return mergesort(a,0,a.size()-1);
    }
};