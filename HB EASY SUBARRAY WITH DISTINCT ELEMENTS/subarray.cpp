#include<bits/stdc++.h>
using namespace std;
#include<unordered_set>

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	unordered_set<int > mp;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int j = 0,ans=0;
	int res = pow(10,9)+7;
	for (int i = 0; i < n; ++i)
	 {
	 	while(j < n and mp.find(arr[j])== mp.end())
	 	{
	 		mp.insert(arr[j]);
	 		j++;
	 	}
	 	ans = ((ans % res) + (((j-1)-i+1)*((j-1)-i+2)/2) % res) % res;
	 	mp.erase(arr[i]);
	 } 
	 cout<<ans<<endl;
	return 0;
}