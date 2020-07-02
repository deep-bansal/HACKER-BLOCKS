#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[2000];
    for(int i=1;i<=(2*n);i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=(2*n);i++)
    {
        for(int j=i+1;j<=(2*n);j++)
        {
            if(j<=(2*n) && arr[i]>arr[j])
            {
                swap(arr[j],arr[i]);
            }
        }
    }
    cout<<arr[n]<<endl;
    return 0;
}
