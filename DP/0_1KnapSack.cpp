#include <bits/stdc++.h> 
using namespace std;
int f(int i,int k,vector<int>&wt,vector<int>&val,vector<vector<int>>&dp)
{
	if(i==0)
	{if(wt[0]<=k)return val[0];
	else
	return 0;}
	if(dp[i][k]!=-1)return dp[i][k];
	int nt=f(i-1,k,wt,val,dp);
	int tk=-1e8;
	if(wt[i]<=k)tk=val[i]+f(i-1,k-wt[i],wt,val,dp);

	return dp[i][k]= max(nt,tk);

}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
	return f(n-1,maxWeight,weight,value,dp);
}