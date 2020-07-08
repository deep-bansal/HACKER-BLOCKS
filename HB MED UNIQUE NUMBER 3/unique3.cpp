#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int cnt[64]={0};
	int n;
	cin>>n;
	int no;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		//store sum in array by extracting bits
		int j=0;
		while(no>0)
			{
				int last_bit=(no&1);
				cnt[j]+=last_bit;
				j++;
				no=no>>1;
			}
	}
	int p=1; ///multiplying by 2 with its powers  2^0 2^1  2^2----
 	int ans=0;
	for(int i=0;i<64;i++)
		{
			cnt[i]%=3;
			ans+=(cnt[i]*p);
			p=p<<1;
		}
		cout<<ans<<endl;
	return 0;
}