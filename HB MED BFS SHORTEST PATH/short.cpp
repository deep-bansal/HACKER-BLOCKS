# include <bits/stdc++.h>
# include <unordered_map>
using namespace std;

class graph
{
public:
	int V;
	list<int>* arr;

	graph(int V)
	{
		this -> V = V;
		arr = new list <int> [V]; 
	}

	void addEdge(int x, int y)
	{
		arr[x].push_back(y);		
		arr[y].push_back(x);
	}
    
	void bfs(int src)
	{
		unordered_map<int,bool> visited;
		map<int,int> dist;
		queue<int>q;
		visited [src] = true;
		q.push(src);
		dist[src] = 0;
		while(!q.empty())
		{
			int frontNode = q.front();
			q.pop();
			for(auto nbr : arr[frontNode])
			{
				if(!visited[nbr])
				{
					visited[nbr] = true;
					dist[nbr] = dist[frontNode]+6;
					q.push(nbr);
				}
			}
		}
		for (int i = 0; i < V; ++i)
		{
			if(visited[i] == false)
			{
				dist[i] = -1;
			}
		}

		for (int i = 0; i < V ; ++i)
		{
			if(dist[i]!= 0)
			{
				cout<<dist[i]<<" ";
			}
		}
		cout<<endl;
	}

	void printList() { //to print adjacency list

		for (int i = 2; i <= V ;i++)
		{
			cout<<i<<"--> ";
			for (auto it : arr[i])
			{
				cout<<it<<" ";
			}
		}		

	}
};

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		graph g(n);
		for (int i = 0; i < m; ++i)
		{
			int u,v;
			cin>>u>>v;
			g.addEdge(u-1,v-1);
		}
		int s;
		cin>>s;
		g.bfs(s-1);
	}
	return 0;
}
