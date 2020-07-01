#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    ///1st half
    for(int row=1;row<=(n+1)/2;row++){
    for(int i=(n-(2*row)+3)/2;i>=1;i--)
    {
        cout<<"*"<<" ";
    }
    if (row>1 && row<=(n+1)/2)
    {
        for(int space=1;space<=(2*row)-3;space++)
        {
            cout<<"  ";
        }
        for(int i=(n-(2*row)+3)/2;i>=1;i--)
    {
        cout<<"*"<<" ";
    }
    }
    if(row==1){for(int i=1;i<=(n-1)/2;i++)
    {
        cout<<"*"<<" ";
    }
    }

    cout<<endl;
    }
    ///2nd half

    for(int row=(n-1)/2;row>=1;row--){
    for(int i=(n-(2*row)+3)/2;i>=1;i--)
    {
        cout<<"*"<<" ";
    }
    if (row>1 && row<=(n+1)/2)
    {
        for(int space=1;space<=(2*row)-3;space++)
        {
            cout<<"  ";
        }
        for(int i=(n-(2*row)+3)/2;i>=1;i--)
    {
        cout<<"*"<<" ";
    }
    }
    if(row==1){for(int i=1;i<=(n-1)/2;i++)
    {
        cout<<"*"<<" ";
    }
    }

    cout<<endl;
    }
    return 0;
}
