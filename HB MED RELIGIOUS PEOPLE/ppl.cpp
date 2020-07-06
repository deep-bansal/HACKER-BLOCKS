#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class graph
{
	int V;
	map<int, list<int> > mp;
public:
	graph(int V)
	{
		this->V = V;
	}

	void addEdge(int u, int v)
	{
		mp[u].push_back(v);
		mp[v].push_back(u);
	}

	void pplHelper(int src,long long int a ,long long int b,map<int,bool> &visited,long long int &cost)
	{
		visited[src] = true;
		queue<int> q;
		q.push(src);
		while(!q.empty())
		{
			int frontNode = q.front();
			q.pop();
			for(auto nbr : mp[frontNode])
			{
				if(!visited[nbr])
				{
					cost+=b;
					visited[nbr] = true;
					q.push(nbr);
				}
			}
		}
	}

	long long int religiousPpl(long long int a,long long int b)
	{
		if( a <= b)
		{
			return (V*a);
		}
		else
		{
			long long int cost = 0;
			

			map<int,bool>visited;
			for(auto vr : mp)
			{
				visited[vr.first] = false;
			}
			for(auto vr: mp)
			{
				if(!visited[vr.first])
				{
					cost+=a;
					pplHelper(vr.first,a,b,visited,cost);
				}
			}
            for(int i = 1;i<=V;i++)
		{
			if(!visited.count(i))
			{
				cost+= a;
			}

		}
			return cost;
		}
	}

};

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, m, a, b;
		cin >> n >> m >> a >> b;
		graph G(n);
		for (int i = 0; i < m; ++i)
		{
			int u, v;
			cin >> u >> v;
			G.addEdge(u, v);
		}
		cout<<G.religiousPpl(a,b)<<endl;
	}

	return 0;
}