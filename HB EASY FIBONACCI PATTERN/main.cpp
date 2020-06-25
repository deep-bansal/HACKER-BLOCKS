#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
  int a=0,b=1,c=a+b;
  int arr[100];
  if(n>=1)
  {
      cout<<a<<endl;
  }
  for(int i=1;i<n;i++)
  {
       if(i==1)
          {
              cout<<b<<" "<<c;
              cout<<endl;
              continue;
          }
      for(int j=0;j<i+1;j++)
      {
          a=b;
          b=c;
          c=a+b;
          cout<<c<<" ";



      }
      cout<<endl;
  }
	return 0;
}
