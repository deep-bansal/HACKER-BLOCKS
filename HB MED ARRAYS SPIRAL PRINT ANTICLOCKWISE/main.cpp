#include <iostream>
using namespace std;
void spriralprint(int arr[11][11],int m,int n)
{
    int startrow=0,endrow=m-1,endcol=n-1,startcol=0;
    while(startcol<=endcol && endrow>=startrow)
    {
        ///print startcol
        int i=startrow;
        while(i<=endrow)
        {
            cout<<arr[i][startcol]<<", ";
            i++;
        }
        startcol++;
        ///print endrow
        i=startcol;
        while(i<=endcol)
        {
            cout<<arr[endrow][i]<<", ";
            i++;
        }
        endrow--;
        ///print endcol
        if(endcol>=startcol){
        i=endrow;
        while(i>=startrow)
        {
            cout<<arr[i][endcol]<<", ";
            i--;
        }
        endcol--;
        }
        ///print startrow
        if(startrow<=endrow){
        i=endcol;
        while(i>=startcol)
        {
            cout<<arr[startrow][i]<<", ";
            i--;
        }
        startrow++;
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
    spriralprint(arr,m,n);
    return 0;
}
