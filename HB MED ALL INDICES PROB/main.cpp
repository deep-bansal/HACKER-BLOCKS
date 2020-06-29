#include <bits/stdc++.h>

using namespace std;
void allidx ( int*arr , int m, int n,  int i,vector<int> &store)
{
    if(i==n)
    {
        return;
    }
    if(i<n && arr[i]==m)
    {
        store.push_back(i);
        allidx(arr,m,n,i+1,store);
    }
    else
    {
        allidx(arr,m,n,i+1,store);
    }
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
    vector<int>store;
    allidx(arr,m,n,0,store);

    for(int k=0;k<store.size();k++)
    {
        cout<<store[k]<<" ";
    }

    return 0;
}
