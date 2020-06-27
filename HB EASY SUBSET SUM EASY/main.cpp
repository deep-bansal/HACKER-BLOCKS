#include <iostream>

using namespace std;
void subsum(int* arr,int n,int i,int sum,int &ans)
{
   if(i==n)
   {
       if(sum==0)
       {
           ans++;
       }
       return;
   }

   int include =arr[i];
   subsum(arr,n,i+1,(sum+include),ans);
   subsum(arr,n,i+1,sum,ans);

}

int main()
{
    int t,n;
    cin>>t;

    while(t--){
         cin>>n;
    int arr[n];

    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    subsum(arr,n,0,0,ans);
    if (ans>1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }

    return 0;
}
