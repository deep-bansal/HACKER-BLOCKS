#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    while(a>0){
        int i=(a%10);
        if(i==b){
            count=count+1;
        }
        a=a/10;
    }
    cout<<count;

    return 0;
}
