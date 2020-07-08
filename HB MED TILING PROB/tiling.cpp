#include<bits/stdc++.h>
using namespace std;
#include <unordered_set>

int dp[100002];
int x= pow(10,9) + 7;

int tilingProb(int n,int m)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	if(n < 0)
	{
		return 0;
	}
	if(dp[n] != 0)
	{
		return dp[n];
	}
	int cnt = 0;
	cnt = ((tilingProb(n-1,m)) % x + (tilingProb(n-m,m)) % x) % x;
	dp[n] = cnt;

	return cnt;
}

int tilingProbBottomUp (int n,int m)
{
	int dp[100001] = {0};
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		if(i>=m)
		{
			dp[i] = ((dp[i-1])  % x + (dp[i-m])  % x) % x;
		}
		else
		{
			dp[i] = (dp[i-1])  % x;
		}
	}
	return dp[n];
}



int main() {
  int t;
  cin>>t;
  while(t--)
  {
  	int n,m;
  	cin>>n>>m;
  	memset(dp,0,sizeof(dp));
  	cout<<tilingProb(n,m)<<endl;
  	cout<<tilingProbBottomUp(n,m)<<endl;
  }
	return 0;
}