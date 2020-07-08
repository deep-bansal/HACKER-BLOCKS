#include <iostream>
using namespace std;
void targetsum (int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(j<n && (arr[i]+arr[j]==key))
            {
               if(arr[i]>arr[j]){
                cout<<arr[j]<<" and "<<arr[i]<<endl;
               }
               else
               {
                   cout<<arr[i]<<" and "<<arr[j]<<endl;
               }
            }
        }
    }
}

int main()
{
    int n,key;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    targetsum(arr,n,key);
    return 0;
}
