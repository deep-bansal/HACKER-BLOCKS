#include <bits/stdc++.h>
# include <unordered_set>
using namespace std;
vector<int> v;
int rangexor (int start,int end ,int num) 
{
	int maxXor = 0;
	int ans = 0;
	for (int i = start-1; i < end ; ++i)
	{
		int currXor = v[i] xor num;
		if(currXor > maxXor)
		{
			maxXor = currXor;
			ans = v[i];

		}		
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int q;
	cin >> q;
	
	for (int i = 0; i < q; ++i)
	{
		int type;
		cin>>type;
		if(type == 0)
		{
			int data;
			cin>>data;
			v.push_back(data);
		}
		else if(type == 1)
		{
			int left,right,data;
			cin>>left>>right>>data;
			cout<< rangexor(left,right,data) <<endl;
			
		}


	}


	return 0;
}