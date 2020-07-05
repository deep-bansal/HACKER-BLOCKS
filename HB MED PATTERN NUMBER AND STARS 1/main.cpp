#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=1; row<=n; row=row+1){

    for(int val=1; val<=n-row+1; val=val+1 ){
        cout<<val<<" ";
    }
    for(int star=1; star<=row-1; star=star+1){
        cout<<"*"<<" ";
    }
    for(int star=1; star<=row-2; star=star+1){
        cout<<"*"<<" ";
    }
    cout<<endl;

    }

}
