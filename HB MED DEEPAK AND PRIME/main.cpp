#include <iostream>
using namespace std;
void prime_seive(long long int p[], long long int N)
{
    p[0]=p[1]=0;
	p[2]=1;
    for(long long int i=3;i<=N;i+=2)
    {
        p[i]=1;
    }
    for(long long int i=3;i<=N;i+=2)
    {
        if(p[i]==1)
        {
            ///mark its multiples as not prime
            for(long long int j=i*i;j<=N;j=j+2*i)
            {
                p[j]=0;
            }
        }
    }
return;
}

int main()
{
    long long int n;
    cin>>n;
    long long int N=100000000;
    long long int p[100000005]={0};
    prime_seive(p,N);
    long long int count=0;
    long long int j=0;
    while(count<n)
    {
        if(p[j]&1)
        {
            count++;
            j++;

        }
        else
        {
            j++;
        }
    }
    cout<<--j<<endl;
    return 0;
}
