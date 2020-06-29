#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int> > v;
		v.reserve(n);
		for (int i = 0; i < n; ++i)
		{
			int start,end;
			cin>>start>>end;
			pair<int,int> p = make_pair(end,start);
			v.push_back(p);
		}
		sort(v.begin(),v.end());
		int activity = 1;
		for (int i = 1; i < n; ++i)
		{
			if(v[i].second >= v[i-1].first)
			{
				activity++;
			}
		}
		cout<<activity<<endl;
	}
	
	return 0;
}
