#include<bits/stdc++.h>
using namespace std;

int dp[100][100] ;

int knapSack0N1D(int* weight, int* val, int n, int cap)
{
	int dp[cap + 1] = {0};

	for (int i = 1; i <= cap ; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (weight[j] <= i)
			{
				dp[i] = max(dp[i], val[j] + dp[i - weight[j]]);
			}
		}
	}
	return dp[cap];
}

int knapSack0NTopDown(int* weight, int* val,int i , int n, int cap)
{
	if (i == n)
	{
		return 0;
	}
	if (dp[i][cap] != 0)
	{
		return dp[i][cap];
	}
	int inc = INT_MIN, exc = INT_MIN;

	for (int k = 0; k < n; ++k)
	{
		if(weight[k] <= cap)
		inc = max(inc , val[k] + knapSack0NTopDown(weight,val,i+1,n, cap - weight[k]));
	
	}
	exc = knapSack0NTopDown(weight, val,i+1, n, cap);

	dp[n][cap] = max(inc, exc);
	return dp[n][cap];

}

int knapSack0N2D (int* weight, int* val, int n, int cap)
{
	int dp[n + 1][cap + 1];
	memset(dp, 0, sizeof(dp));


	for (int i = 1; i <= n ; ++i)
	{
		int incPrice = INT_MIN;
		int excPrice = INT_MIN;
		for (int j = 1; j <= cap ; ++j)
		{

			if (weight[i] <= j)
			{
				incPrice = val[i] + dp[i][j - weight[i]];
			}

			excPrice = dp[i - 1][j];

			dp[i][j] =  max(incPrice, excPrice);
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= cap; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[n][cap];
}
int main(int argc, char const *argv[])
{
	int n, cap;
	cin >> n >> cap;
	int weight[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> weight[i];
	}
	int val[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> val[i];
	}
	cout << knapSack0N1D(weight, val, n, cap) << endl;
	cout << knapSack0N2D(weight, val, n, cap) << endl;
	memset(dp, 0, sizeof(dp));
	cout << knapSack0NTopDown(weight, val,0, n , cap) << endl;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= cap; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}