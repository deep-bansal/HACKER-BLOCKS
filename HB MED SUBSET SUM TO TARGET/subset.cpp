#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>

bool dp[5001][10000] = {0};
bool subsetSumToTarget(int* arr,int n,int sum)
{
	if(sum == 0)
	{
		return true;
	}
	if(n == 0 and sum!= 0)
	{
		return false;
	}
	if(dp[n][sum]!= 0)
	{
		return dp[n][sum];
	}

	if(arr[n-1] > sum)
	{
		dp[n][sum] = subsetSumToTarget(arr,n-1,sum);
	}
	else
	{
		dp[n][sum] = subsetSumToTarget(arr,n-1,sum-arr[n-1]) or
		       subsetSumToTarget(arr,n-1,sum);
	}
	return dp[n][sum]; 
}

bool subsetSumToTargetBottomUp(int* arr,int n,int sum)
{
	bool dp[n+1][sum+1];
	for (int i = 0; i <=n ; ++i)
	{
		dp[0][i] = false;
	}
	for (int i = 0; i <= n ; ++i)
	{
		dp[i][0] = true;
	}

	for (int i = 1; i <= n ; ++i)
	{
		for (int j = 1; j <= sum ; ++j)
		{
			if(j < arr[i-1])
			{
				dp[i][j] = dp[i-1][j];
			}
			else
			{
				dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]];
			}
		}
	}
	return dp[n][sum];

}

int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	if(subsetSumToTarget(arr,n,k))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	cout<<subsetSumToTargetBottomUp(arr,n,k)<<endl;
	return 0;
}