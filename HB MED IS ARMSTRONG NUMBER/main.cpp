#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r,sum=0;
    cin>>n;
    //n jo h do baar use ho rha h hr bar uski value update ho jayegi agr humne use ksi aur variable mei nh kra to;
    int a=n;
    int count=0;
    while(a>0){
        count =count+1;
        a=(a/10);
    }
    a=n;
    while(a>0){
        r=a%10;
    sum=sum+pow(r,count);
    a=a/10;
    }
    if(sum==n){
        cout<<"true";
        else {cout<<"false";}
    }
    return 0;
}
