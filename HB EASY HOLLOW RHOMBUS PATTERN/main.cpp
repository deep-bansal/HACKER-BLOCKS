#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=1; row<=n; row=row+1){
        for(int space=1; space<=(n-row); space=space+1){

            cout<<" ";
        }
                if (row==1 || row==n){
            for(int star=1; star<=n; star=star+1){
                cout<<"*";
                     }
                }
                if(row>1 && row<n ) { cout<<"*";
                for(int space=1; space<=(n-2); space=space+1){
                    cout<<" ";}
                    cout<<"*";
                }
                cout<<endl;

                 }

      }


















