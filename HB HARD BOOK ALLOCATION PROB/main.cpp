#include <iostream>

using namespace std;
#define ll long long
bool isPossible(ll int* arr,ll int n,ll int k,ll int mid)
{
   ll int students=1;
    ll int currpages=0;
    for(ll int i=0;i<n;i++)
    {
        if(currpages+arr[i]>mid)
        {
            currpages=arr[i];

            students++;
            if(students>k)
            {
                return false;
            }
        }
        else
        {
            currpages+=arr[i];
        }
    }
    return true;
}
long long int BookAllocate(ll int*arr,ll int n,ll int m)
{
   ll int totalpages=0;
  ll int start=0,end=0;
   for(ll int i=0;i<n;i++)
   {
       totalpages+=arr[i];
       start=max(start,arr[i]);
   }
   end=totalpages;
   ll int ans=0;

   while(start<=end)
   {
         ll int mid=(start+(end-start)/2);
          if(isPossible(arr,n,m,mid))
          {
              ans=mid;
              end=mid-1;
          }
          else
          {
              start=mid+1;
          }
   }
   return ans;
}

int main()
{
    ll int t;
    cin>>t;
   for(int i=0;i<t;i++)
    {
       ll int n,m;
        cin>>n>>m;
        ll int arr[n];
        for(ll int i=0;i<n;i++)
          {
           cin>>arr[i];
          }
   cout<<BookAllocate(arr,n,m)<<endl;

    }

}
