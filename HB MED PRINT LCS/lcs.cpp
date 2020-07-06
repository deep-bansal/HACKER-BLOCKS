#include<bits/stdc++.h>
using namespace std;



string lcsBottomUp(string s1,string s2)
{
	int dp[s1.length()+1][s2.length()+1];

	for (int i = 0; i <= s1.length() ; ++i)
	{
		for (int j = 0; j <= s2.length() ; ++j)
		{
			dp[i][j] = 0;
		}
	}
	
	
	for (int i = 1; i <= s1.length(); ++i)
	{
		for(int j = 1; j<= s2.length(); j++)
		{
			if(s1[i-1] == s2[j-1])
			{
				dp[i][j] = 1 + max(dp[i-1][j], dp[i][j-1]);
			}
			else
			{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
			}
		}
	}

    int k = s1.length();
    int m = s2.length();
    string output;
    while( k >= 0 and m >= 0 )
    {
		if(s1[k-1] == s2[m-1])
		{
			output+=s1[k-1];
			k--;
			m--;
		}
		  else
        if(dp[k-1][m]>dp[k][m-1])
        {
            k--;
        }
        else
        {
            m--;
        }

	}
	return output;
}


int main(int argc, char const *argv[])
{
	string string1,string2;
	cin>>string1>>string2;
	string ans = lcsBottomUp(string1,string2);
	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
	
	return 0;
}