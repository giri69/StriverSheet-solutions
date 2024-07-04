#include<bits/stdc++.h>
using namespace std;
vector<int> Solution::prevSmaller(vector<int> &A) {
   int n1=A.size();
       vector<int>ans(n1,-1);
        stack<int> st;
        for(int i=0;i<n1;i++){
            while(!st.empty() && st.top()>=A[i])
                st.pop();
            if(!st.empty())
            {
                ans[i]=st.top();
            }
            st.push(A[i]);
        }
        return ans;
       
    
}
