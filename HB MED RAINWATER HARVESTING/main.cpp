#include <iostream>

using namespace std;

int main()
{
    int arr[50],n;
    cin>>n;
    int leftarr[50];
    int rightarr[50];
    int a[50];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    leftarr[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        leftarr[i]=max(arr[i],leftarr[i-1]);
    }
    rightarr[n-1]=arr[n-1];
    for(int i=(n-2);i>=0;i--)
    {
        rightarr[i]=max(arr[i],rightarr[i+1]);

    }

   for(int i=0;i<n;i++)
   {
       a[i]=min(leftarr[i],rightarr[i])-arr[i];
   }
   int sum=0;
   for(int i=0;i<n;i++)
   {
       sum+=a[i];
   }
   cout<<sum;

    return 0;
}
