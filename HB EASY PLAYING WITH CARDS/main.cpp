#include <bits/stdc++.h>

using namespace std;
#define ll long long int

long long int primearray[10000000] = {0} ;

void prime_seive(ll *p,ll N ){

   p[1]= p[0] = 0 ;
    p[2]=1;

    for(ll i=3 ;i<=N ;i+=2){
        p[i] = 1 ;
    }

    for(ll i=3 ;i<=N ; i+=2){
        if(p[i]==1){
            for(ll j=i*i ; j<=N ; j=j+2*i){
                p[j]=0;
            }
        }
    }
}
void printstack(stack<int>stprint)
{
    while(!stprint.empty())
    {
        cout<<stprint.top()<<endl;
        stprint.pop();
    }
}

void playingwithcards (int q, stack <int> &A0,int i)
{
    if(i>q)
    {
        return;
    }

    int val=primearray[i];

    stack<int> A;
    stack<int> B;
    while(!A.empty())
    {
        A.pop();
    }
     while(!B.empty())
    {
        B.pop();
    }
   while(!A0.empty())
   {
       int f=A0.top();
       if(f%val==0)
    {

        B.push(f);
        A0.pop();
    }
       else
    {
        A.push(f);
        A0.pop();
    }

   }
    printstack(B);
    playingwithcards(q,A,i+1);
    printstack(A);

}

int main()

{
    int N=10000000;
	ll p[N] = {0} ;
    prime_seive(p,N) ;
	for(long long int i=1 ,k=1 ; i<=N && k<=N ; i++)
    {
		if(p[i]==1)
		{
			primearray[k]=i ;
			k++ ;
		}
	}

  int n,q;
  cin>>n>>q;
  stack<int> A0;
  for(int i=0;i<n;i++)
  {
      int k;
      cin>>k;
      A0.push(k);
  }

  playingwithcards(q,A0,1);


    return 0;
}
