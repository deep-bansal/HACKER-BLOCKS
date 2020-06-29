#include<bits/stdc++.h>
using namespace std;
# define ll long long 
#include <unordered_map>

class graph
{
	int V;
	map<int, list<int> > mp;
public:
	graph(int V)
	{
		this->V = V;
	}

	void addEdge (int x,int y)
	{
		mp[x].push_back(y);
	}

	void dfs_helper(int master_vertex,int sizeofList, map<int, bool> &visited,int& cnt)
	{
		visited[master_vertex] = true;

		for (auto y : mp[master_vertex])
		{
			if (visited[y] == false)
			{
				dfs_helper(y, sizeofList, visited, cnt);
				if (mp[y].size() > sizeofList)
				{
					cnt++;
				}
			}

		}


	}

   int dfs()
	{
		map<int, bool> visited;
		for (auto vr : mp)
		{
			visited[vr.first] = false;
		}
		int cnt = 0;
		for (auto x : mp)
		{
			if (!visited[x.first])
			{
				int master_vertex = x.first;
				auto listPresent = (x.second);
				int size = listPresent.size();

				dfs_helper(master_vertex, size, visited, cnt);
			}
		}
		return cnt;

	}
	

};

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	graph g(n);
	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		g.addEdge(u, v);
	}
	cout << g.dfs() << endl;

	return 0;
}