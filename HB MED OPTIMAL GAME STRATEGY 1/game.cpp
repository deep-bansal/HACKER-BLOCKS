#include<bits/stdc++.h>
using namespace std;
int dp[31][31];
int optGameStratTopDown(int* arr,int i,int j)
{
	if(i>j)
	{
		return 0;
	}
	if(dp[i][j]!= 0)
	{
		return dp[i][j];
	}

	dp[i][j] = max(arr[i] + min(optGameStratTopDown(arr,i+2,j),optGameStratTopDown(arr,i+1,j-1)),
		      arr[j] + min(optGameStratTopDown(arr,i,j-2),optGameStratTopDown(arr,i+1,j-1))); 

	return dp[i][j];
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	memset(dp,0,sizeof(dp));
	cout<<optGameStratTopDown(arr,0,n-1)<<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}