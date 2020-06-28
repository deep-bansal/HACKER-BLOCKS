#include <bits/stdc++.h>
#define ll long
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[10005],freq[10005]={0};
        freq[0]=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            sum%=n;
            sum=(sum+n)%n;
            freq[sum]++;
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ll m=freq[i];
            ans+=(m*(m-1))/2;

        }
    cout<<ans<<endl;
    }
    return 0;
}
