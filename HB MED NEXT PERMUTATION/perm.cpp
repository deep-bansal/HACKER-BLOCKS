#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0 ;i<n ; i++)
		{
			cin>>arr[i];
		}
		if(next_permutation(arr,arr+n))
		{
			for(int i = 0; i<n ;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			sort(arr,arr+n);
			for(int i = 0; i<n ;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}

	}

	return 0;
}