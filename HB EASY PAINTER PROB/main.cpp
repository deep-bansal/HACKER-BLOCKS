#include <bits/stdc++.h>
using namespace std;
static int MOD= 10000003;

#define ll long long
bool ispossible(ll int*arr,ll int n,ll int k,ll int mid)
{
    ll int painters=1;
    ll int currentunits=0;
    for(int i=0;i<n;i++)
    {

        if(currentunits+arr[i]>mid)
        {
            painters++;
			currentunits=arr[i];
            if(painters>k)
            {
                return false;
            }
        }
            else
        {
            currentunits+=arr[i];
        }
    }
    return true;
}
int painter(ll int* arr,ll int n,ll int k,int t)
{
    ll int start=0,end=0;
    ll int totalunits=0;
    for(int i=0;i<n;i++)
    {
        totalunits+=arr[i];
        start=max(start,arr[i]);

    }
    end=totalunits;
    ll int ans=0;
    while(start<=end)
    {
      ll int mid=start+((end-start)/2);
        if(ispossible(arr,n,k,mid)==true)
        {
            ans=mid;
            end=mid-1;

        }
        else
        {
            start=mid+1;
        }
    }
    return (int)(((ans% MOD)*(t%MOD))%MOD);

}

int main()
{
   ll int n,k,t;
    cin>>n>>k>>t;
    ll int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<painter(arr,n,k,t)<<endl;

    return 0;
}
