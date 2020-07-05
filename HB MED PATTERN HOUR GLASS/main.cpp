#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
             //1st half
    for(int row=1; row<=n+1; row++){
        for (int space=1; space<=row-1; space++){
            cout<<" ";
        }
        for(int val=n-row+1; val>=0; val=val-1){
            cout<<val;
        }
        for(int val=1; val<=n-row+1; val=val+1){
            cout<<val;
        }
        cout<<endl;
    }
              //2nd half
        for(int row=n; row>=1; row--){
          for (int space=1; space<=row-1; space++){
            cout<<" ";
        }
          for(int val=n-row+1; val>=0; val=val-1){
            cout<<val;
        }
          for(int val=1; val<=n-row+1; val=val+1){
            cout<<val;
        }
        cout<<endl;
    }


    return 0;
}
