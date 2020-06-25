#include <iostream>

using namespace std;
int foundat (int n,int* arr,int m,int i)
{
    if(i==n)
    {
        return -1;
    }
    int rr=foundat (n,arr,m,i+1);
    if(arr[i]==m && rr==-1)
    {
        return i;
    }
    return rr;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    cout<<foundat (n,arr,m,0)<<endl;
    return 0;
}
