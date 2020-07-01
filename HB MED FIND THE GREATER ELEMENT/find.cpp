#include <bits/stdc++.h>
using namespace std;


void findgreater(stack<int>st,int* arr,int n)
{
	int ans[n];	
	for (int i = n-1; i >= 0; i--)
	{
		while(!st.empty() && st.top()<= arr[i])
		{
			st.pop();
		}

		if(st.empty())
		{
			ans[i]=-1;

		}
		else
		{
			ans[i]=st.top();
		}
		st.push(arr[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i]<<" ";
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	stack <int> st;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;
		arr[i]=num;
		st.push(num);
	}
	
	findgreater(st,arr,n);
	
	return 0;
}