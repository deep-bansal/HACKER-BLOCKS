#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long int n;
	cin>>n;
	long long arr[n];
	
	int no;
	int res=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>no;
		arr[i]=no;
		res= res^no;
	}
    /// xor=a^b;
    int temp=res;
    int pos=0;
    while(temp&1!=1)
    {
    	pos++;
    	temp>>1;
    }

    int mask=(1<<pos);
    int x=0,y=0;
    for(long long int i=0;i<n;i++)
    {
    	if((arr[i] & mask)>0)
    	{
    		x=x^arr[i];

    	}
    }
    y=res^x;
    cout<<min(x,y)<<" "<<max(x,y)<<endl;
	return 0;
}