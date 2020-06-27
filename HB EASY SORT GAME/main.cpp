#include <bits/stdc++.h>

using namespace std;
#define ll long long
bool compare(pair<ll int,string>a,pair<ll int,string>b)
{
    if(a.first==b.first)
    {
        return (a.second)<(b.second);
    }
    return (a.first)>(b.first);
}

int main()
{
    ll int x;
    cin>>x;
    ll int n;
    cin>>n;
    vector<pair<ll int,string> >vec;
    for(int i=0;i<n;i++)
    {
       ll int salary;
        string str;
        cin>>str>>salary;
        vec.push_back(make_pair(salary,str));
    }
    sort(vec.begin(),vec.end(),compare);
    for(ll int i=0;i<n;i++)
    {
        if(vec[i].first>=x)
        {
            cout<<vec[i].second<<" "<<vec[i].first<<endl;
        }

    }
    return 0;
}
