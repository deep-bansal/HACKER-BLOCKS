#include <iostream>
using namespace std;
#define ll long long int

void prime_seive(ll *p,ll N ){

   p[1]=p[0] = 0 ;
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

	return ;
}
int main() {
    int N=100000000;
	ll p[N] = {0} ;
    prime_seive(p,N) ;
	long long int parr[N] = {0} ;
	for(long long int i=1 ,k=1 ; i<=N && k<=N ; i++){
		if(p[i]==1){
			parr[k]=i ;
			k++ ;
		}
	}
	int t ;
	cin >> t ;
	while(t>0){
		long long int x ;
		cin >> x ;
		cout << parr[x] << endl ;
		t-- ;
	}
	return 0;
}
