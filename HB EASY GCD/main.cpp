#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int GCD=1;
    int j= min(a,b);
    for(int i=1; i<=j;i++){
        if(a%i==0 && b%i==0){
            GCD=max(GCD,i);

        }
    }
    cout<<GCD;

    return 0;
}
