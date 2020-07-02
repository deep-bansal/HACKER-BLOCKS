#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>

vector<int> v;
unordered_map<int,int> mp;

bool compare (int a,int b)
{
	if(mp[a]< mp[b])

	{
		return true;
	}

		return false;


}

void mikeandhash(int* arr ,int n)
{
	
	for (int i = 0; i < n; ++i)
	{
		if(mp.count(arr[i]))
		{
			mp[arr[i]] = i;
		}
		else
		{
			mp[arr[i]] = i;
			v.push_back(arr[i]);
		}
	}
	sort(v.begin(),v.end(),compare);

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	mikeandhash(arr,n);
	for(auto i : v)
	{
		cout<<i<<endl;
	}
	
	return 0;
}