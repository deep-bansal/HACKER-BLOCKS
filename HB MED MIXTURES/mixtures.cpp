#include <bits/stdc++.h>
using namespace std;
int dp[150][150];
int arr[100];

int sum (int s , int e)
{
	int ans = 0;
	for (int i = s; i <= e ; ++i)
	{
		ans += arr[i];
		ans = ans % 100;
	}
	return ans;
}

int mixtures(int i, int j)
{
	if (i >= j)
	{
		return 0;
	}
	if (dp[i][j] != -1)
	{
		return dp[i][j];
	}

	dp[i][j] = INT_MAX;
	for (int k = i; k < j ; ++k)
	{
		dp[i][j] = min(dp[i][j], mixtures(i, k) + mixtures(k + 1, j) + (sum(i, k) * sum(k + 1, j)));

	}
	return dp[i][j];


}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 150; ++i)
	{
		for (int j = 0; j < 150; ++j)
		{
			dp[i][j] = -1;
		}
	}

	cout << mixtures(0, n - 1) << endl;
	for (int i = 0; i < n ; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}