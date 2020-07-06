#include<iostream>
using namespace std;
void pythagoras(int n)
{
    long long int a,b,c;
    if(n==1 || n==2)
    cout<<"-1";
    else
    {
        if(n%2!=0)
        {
            long long int p=((n+1)/2);
            long long int q=((n-1)/2);
            a= (p+q)*(p-q);
            b= 2*p*q;
            c= ((p*p) + (q*q));
                cout<<b<<" "<<c;
        }
        else
        {
            long long int p=n/2;
            long long int q=1;
            a= (p+q)*(p-q);
            b= 2*p*q;
            c= ((p*p) + (q*q));
                cout<<a<<" "<<c;
        }
    }
}
int main()
{
   int n;
   cin>>n;
   pythagoras(n);
	return 0;
}
