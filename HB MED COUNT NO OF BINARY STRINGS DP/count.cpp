# include<bits/stdc++.h>
using namespace std;

int dp[100][2];
long long int countStringsTopDown(int n, int last_digit)
{
	if (n == 0)
	{
		return 1;
	}
	if (dp[n][last_digit] != 0)
	{
		return dp[n][last_digit];
	}
	long long int ans = 0;
	if (last_digit == 0)
	{
		ans = countStringsTopDown(n - 1, 0) + countStringsTopDown(n - 1, 1);
	}
	else
	{
		ans = countStringsTopDown(n - 1, 0);
	}
	dp[n][last_digit] = ans;
	return ans;
}

long long int countStringsBottomUp(int n)
{
	long long int dp [2][n + 1] ;

	dp[0][0] = dp[1][0] = 0;
	dp[0][1] = dp[1][1] = 1;

	for (int i = 2; i <= n; ++i)
	{

		dp[0][i] = (dp[0][i - 1]  + dp[1][i - 1]) ;
		dp[1][i] = dp[0][i - 1] ;

	}

	return (dp[0][n] + dp[1][n]);
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;

		
		cout <<(countStringsBottomUp(n))  << endl;
	}

	long long int ans = countStringsTopDown(n - 1, 0) + countStringsTopDown(n - 1, 1);
	 cout << ans << endl;
}