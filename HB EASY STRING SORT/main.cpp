#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
   string arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   for(int i=0;i<n;i++)
   {
       if(arr[i+1].substr(0,arr[i].length())==arr[i])
       {
           swap(arr[i+1],arr[i]);
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<endl;
   }

    return 0;
}
