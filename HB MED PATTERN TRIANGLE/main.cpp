#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int row=1; row<=n; row=row+1){
        for (int space=n-row; space>=1; space=space-1){
            cout<<"  ";
        }
        int val=row;
     for(int col=1; col<=row; col=col+1){
            cout<<val<<" ";
        val=val+1;

     }
     int val2= 2*(row-1);
     for(int k=1;k<=row-1;k++)
     {
         cout<<val2<<" ";
         val2--;
     }
     cout<<endl;




    }
}
