#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void intersectionoftwo(int* arr1,int* arr2,int n)
{
	unordered_map<int,int > mp;
	for (int i = 0; i < n; ++i)
	{
		if(mp.count(arr1[i]))
		{
			mp[arr1[i]]+=1;
		}
		else
		{
			mp[arr1[i]]=1;
		}
	}

	vector<int> ans;
	for (int i = 0; i < n; ++i)
	{
		if(mp.count(arr2[i]) and mp[arr2[i]]>=1)
		{
			ans.push_back(arr2[i]);
			mp[arr2[i]]-=1;

		}

	}

	sort(ans.begin(),ans.end());
	cout<<"[";
	int i=0;
	for (; i < ans.size()-1; ++i)
	{
		cout<<ans[i]<<", ";
	}
	cout<<ans[i]<<"]";	

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr1[n],arr2[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr1[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>arr2[i];
	}
	intersectionoftwo(arr1,arr2,n);

	return 0;
}