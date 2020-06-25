#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()

{
    ll n;
    cin>>n;
    int ques,r;
    int arr[n]={0};
    int i=0;
    while(n!=0)
    {
       r=n%8;
       arr[i]=r;
       i++;
       n=n/8;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }



    return 0;
}
