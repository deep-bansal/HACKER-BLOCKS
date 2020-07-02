#include<bits/stdc++.h>
using namespace std;

int lcsBottomUp(string s1,string s2,string s3)
{
	int dp[s1.length()+1][s2.length()+1][s3.length()+1];

	for ( int i = 0; i <= s1.length(); ++i)
	{
		for( int j = 0; j<= s2.length(); j++)
		{
			for ( int k = 0; k <= s3.length(); ++k)
			{
			   if (i == 0 || j == 0||k==0) 
                    dp[i][j][k] = 0; 

				else if(s1[i-1] == s2[j-1] && s2[j-1]== s3[k-1])
			{
				dp[i][j][k] = 1 + dp[i-1][j-1][k-1];
			}
			else
			{
				dp[i][j][k] = max(dp[i-1][j][k] , max(dp[i][j-1][k], dp[i][j][k-1]));
			}
			}
		}
	}

    return dp[s1.length()][s2.length()][s3.length()];
}


int main()
{
	string string1,string2,string3;
	cin>>string1>>string2>>string3;

	cout<<lcsBottomUp(string1,string2,string3)<<endl;

	return 0;
}
