#include<bits/stdc++.h>
using namespace std;

class graph
{
	int V;
	vector<int> parent;
	int connectedComp;
public:
	graph(int V)
	{
		this -> V =V;
		parent.reserve(V);
		connectedComp = V;
		for (int i = 0; i < V; ++i)
		{
			parent[i] = i;
		}

	}
	int getsuperparent(int x)
	{
		if(parent[x] == x)
		{
			return x;
		}
		else
		{
			parent[x] = getsuperparent(parent[x]);
			return parent[x];
		}
	}
	void unite(int u ,int v)
	{
		int ParU = getsuperparent(u);
		int ParV = getsuperparent(v);

		if(ParV != ParU)
		{
			parent[ParU] = ParV;
			parent[u] = ParV;
			connectedComp--;
		}
	}

	int pairing()
	{
		map<int,int> freq;
		for(int i = 0 ; i<=V-1; i++)
		{
			if (freq.count(parent[i]) == true)
			{
				freq[parent[i]]++;
			}
			else
			{
				freq[parent[i]] = 1;
			}
		}
		int totalPairs = (V*(V-1))/2;
		int samePairs = 0;
		for (auto x : freq)
		{
			int num = x.second;
			samePairs +=	((num) * (num - 1)) / 2;
		}

		int ans = totalPairs - samePairs;
		return ans;
	}
	
};

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	graph g(n);
	for (int i = 0; i < m; ++i)
	{
		int u,v;
		cin>>u>>v;
		g.unite(u,v);
	}
	cout<<g.pairing()<<endl;

	
	return 0;
}