#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     int j;
    for(int i=a; i<=b; i=i+c){
        j=(5*(i-32))/9;

        cout<<i<<" "<<j<<endl;
    }
    return 0;
}
