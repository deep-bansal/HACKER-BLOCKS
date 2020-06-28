#include <iostream>

using namespace std;
void prime_seive( long long int p[],long long int n)
{
   p[0]=p[1]=0;
    p[2]=1;
    ///first mark all odd numbers as prime
    for(long long int i=3;i<=n;i+=2)
    {
        p[i]=1;
    }
    ///seive
    for(long long int i=3;i<=n;i+=2)
    {
        ///if current no is prime
        if(p[i]==1)
        {
            ///mark its multiples as not prime
            for(long long int j=i*i;j<=n;j=j+(2*i))
            {
                p[j]=0;
            }
        }
    }

    return;
}

int main()
{
    int t;
    cin>>t;
    int a,b;
    long long int n=100000;
    long long int p[n];
    prime_seive(p,n);
    int k=1;
    while(k<=t)
    {
        int cnt=0;
        cin>>a>>b;
        for(long long int i=a;i<=b;i++)
	  {
	    if(p[i]==1)
	    {
	      cnt=cnt+1;
	    }
	  }
	  cout<<cnt<<endl;
	  k++;
    }
}
