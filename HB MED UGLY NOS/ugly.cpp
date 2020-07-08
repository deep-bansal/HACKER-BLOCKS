
# include<bits/stdc++.h> 
using namespace std; 
  
long long int getNthUglyNo(long long int num)
{
	long long int dp[num];
	dp[0] = 1;
	long long int count2 = 0,count3=0,count5 = 0;
	long long int next_ugly_num2 = 2;
	long long int next_ugly_num3 = 3;
	long long int next_ugly_num5 = 5;

	for (long long int i = 1; i < num; ++i)
	{
		long long int ans =min(next_ugly_num5,min(next_ugly_num3,next_ugly_num2));
		dp[i] = ans;

		if(ans % 2 == 0)
		{
			count2+=1;
			next_ugly_num2 = dp[count2]*2;
		}
		if(ans % 3 == 0)
		{
			count3+=1;			
			next_ugly_num3 = dp[count3]*3;
		}
		if(ans % 5 == 0)
		{
			count5+=1;
			next_ugly_num5 = dp[count5]*5;
		}
	}

	return dp[num-1];
}

 int main() 
{ 
   long long int t;
   cin>>t;
   while(t--)
   {
	  long long  int num;
	   cin>>num;
	   cout<<getNthUglyNo(num)<<endl;
   }
} 