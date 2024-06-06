#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>w;
        int top=0,right=matrix[0].size()-1,left=0,bottom=matrix.size()-1;
        while(top<=bottom && left<=right)
        {

        for(int i=left;i<=right;i++)
        {
            w.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            w.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom)
        {

        for(int i=right;i>=left;i--)
        {
            w.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        if(left<=right)
        {
        for(int i=bottom;i>=top;i--)
        {
            w.push_back(matrix[i][left]);
        }
        left++;

        }
        }

      return w;
    }
};