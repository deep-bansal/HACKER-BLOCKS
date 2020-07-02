#include <iostream>
using namespace std;
int maxopt (int arr[],int n)
{
    int currentval=INT_MIN;
    int maxval=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>currentval)
        {
            currentval=arr[i];
            maxval=currentval;
        }
    }
    cout<<maxval;
    return 0;
}

int main()
{
    int n, arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxopt (arr,n);
    return 0;
}
