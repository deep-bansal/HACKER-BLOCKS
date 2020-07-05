#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row=1; row<=n; row++){
        for (int col=1; col<=row; col++){
            cout<<col;
        }
        for(int val=1; val<=n-row; val++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
