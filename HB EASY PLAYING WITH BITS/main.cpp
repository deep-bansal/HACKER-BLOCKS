#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
	int testCases;
	cin >> testCases;
	for (int i=0; i < testCases; ++i)
	{
		int a,b;
		cin >>a>>b;
		int count=0;
		for(int num=a; num<=b;num++){
	       int j=num;
	       while(j>0)
           {
               int result=(j&1);
               j=j>>1;
               count=count+result;
           }

	}
	cout<<count<<endl;
	}

	return 0;

}
