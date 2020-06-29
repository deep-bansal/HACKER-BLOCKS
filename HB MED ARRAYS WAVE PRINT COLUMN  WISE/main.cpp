#include <iostream>
using namespace std;
int waveprint(int arr[11][11],int m,int n)
{
    for(int col=0;col<n;col++)
    {
        if(col%2==0)
        {
            for(int row=0;row<m;row++)
            {
                cout<<arr[row][col]<<",";
            }
        }
        else
        {
            for(int row=m-1;row>=0;row--)
            {
                cout<<arr[row][col]<<",";
            }

        }
    }
    cout<<"END";
}

int main()
{
    int arr[11][11];
    int m,n;
    cin>>m>>n;
    for(int row=0;row<m;row++)
    {
        for(int col=0;col<n;col++)
        {
           cin>>arr[row][col];
        }
    }
    waveprint(arr,m,n);
    return 0;
}
