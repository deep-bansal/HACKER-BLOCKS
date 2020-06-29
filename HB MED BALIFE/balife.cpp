#include<bits/stdc++.h>
using namespace std;

int baLife(int n,int* arr,int load)
{
	if(load % n != 0)
	{
		return -1;
	}
	load = load/n;
	int maxLoad =0,diff =0;
	for (int i = 0; i < n; ++i)
	{
		diff+= (arr[i] - load);
		int ans = max(diff,-diff);
		maxLoad = max(maxLoad,ans);		
	}
	return maxLoad;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	int load =0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		load+= arr[i];
	}
	cout<<baLife(n,arr,load)<<endl;;

	return 0;
}