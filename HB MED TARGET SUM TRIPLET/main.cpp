#include <iostream>
using namespace std;
void targetsumtrip (int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==key)
                {
                    cout<<arr[i]<<", "<<arr[j]<<" and "<<arr[k]<<endl;
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
    for(int i=0;i<n;i++)    /// for sorting
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
                swap(arr[j],arr[i]);
        }
    }

    targetsumtrip(arr,n,key);
    return 0;
}
