#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int print2largest(int arr[], int n) {
	    int m1,m2;
	    m2=-1,m1=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        if(arr[i]>m1)
	        {
	            m2=m1;
	            m1=arr[i];
	        }
	        if(arr[i]!=m1&&arr[i]>m2)m2=arr[i];
	    }
	    return m2;
	}
};