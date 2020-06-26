#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int val;

           for(int row=1; row<=n; row=row+1){
                if (row==1){val=1;}
                else {val=row-1;}

            for (int col=1; col<=row; col=col+1){
                if(col==1 || col==row){
                    cout<<val;
                }
                else{cout<<"0";}
            }
            cout<<endl;


    }

    return 0;
}
