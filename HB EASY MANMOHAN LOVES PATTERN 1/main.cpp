#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=1; row<=n; row++){
        if(row%2!=0){
            for(int j=1; j<=row; j++){
                cout<<"1";
            }
        }
            if(row%2==0){
                cout<<"1";
                for(int i=1; i<=(row-2); i++){
                    cout<<"0";
                }
                cout<<"1";
            }
            cout<<endl;

    }
    return 0;
}
