#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
        //1st half
    for(int row=1; row<=(n+1)/2; row=row+1){
        for(int space=1; space<=n-(2*row)+1; space=space+1){
            cout<<" ";
        }
        for(int val=row; val>=1; val--){
            cout<<val;
        }
        for(int space=1; space<=row-1; space++){
            cout<<" ";
        }
        for(int space=1; space<=row-2; space++){
            cout<<" ";
        }
        if (row>1){
        for(int val=1; val<=row; val++){
           cout<<val;
        }
        }


        cout<<endl;
          }
                  //2nd half
        for(int row=(n-1)/2; row>=1; row=row-1){
        for(int space=1; space<=n-(2*row)+1; space=space+1){
            cout<<" ";
        }
        for(int val=row; val>=1; val--){
            cout<<val;
        }
        for(int space=1; space<=row-1; space++){
            cout<<" ";
        }
        for(int space=1; space<=row-2; space++){
            cout<<" ";
        }
        if (row>1){
        for(int val=1; val<=row; val++){
           cout<<val;
        }
        }


        cout<<endl;
          }


    return 0;
}
