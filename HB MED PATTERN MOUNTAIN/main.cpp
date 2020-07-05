#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int val;
    for(int row=1; row<=n; row=row+1){
            if (row<n-1){
            for (int col=1; col<=row; col=col+1){
                cout<<col<<" ";
            }
            }
            else{
                for(int i=1; i<=n-1; i=i+1){
                    cout<<i<<" ";
                }
            }
            for(int space=1; space<=n-row; space=space+1){
                cout<<"  ";
            }
            for(int space=1; space<=n-(row+1); space=space+1){
                cout<<"  ";
            }


            for(int col=row; col>=1; col=col-1){

                    cout<<col<<" ";

            }

        cout<<endl;
    }
    return 0;
}
