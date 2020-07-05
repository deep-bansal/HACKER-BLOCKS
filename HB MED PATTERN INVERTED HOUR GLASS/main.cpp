#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

                // 1st half
    for (int row=1; row<=n; row=row+1){
                  // for A
        for(int val=n; val>n-row; val=val-1){
                cout<<val;

            }
           //for B
           for (int space=1; space<=n-row+1; space=space+1){
            cout<<" ";
           }
           //for C
           for (int space=1; space<=n-row; space=space+1){
            cout<<" ";
           }
           for(int val=n-row+1;val<=n;val=val+1 ) {
            cout<<val;

           }

                cout<<endl;
    }
    for(int val=n; val>=0; val=val-1){
        cout<<val;
        }
        for(int val2=1; val2<=n; val2=val2+1){
            cout<<val2;
            }
            cout<<endl;
            //2nd half
            for (int row=n; row>=1; row=row-1){
                  // for A
        for(int val=n; val>n-row; val=val-1){
                cout<<val;

            }
           //for B
           for (int space=1; space<=n-row+1; space=space+1){
            cout<<" ";
           }
           //for C
           for (int space=1; space<=n-row; space=space+1){
            cout<<" ";
           }
           for(int val=n-row+1;val<=n;val=val+1 ) {
            cout<<val;

           }

                cout<<endl;
    }


}
