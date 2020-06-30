#include <bits/stdc++.h>
#include <unordered_map>
#define inf 1e9
using namespace std;

// works only on positive weights
class graph
{	
    int vertices;
	unordered_map<int, list<pair<int, int> > > mp;//weighted graph
//unordered_map<vertex, list<pair<_neighbour_vertex, weight> > >
public:

	graph(int v) {
		vertices = v;
	}

	void addEdge(int x, int y, int weight) {
		mp[x].push_back(make_pair(y, weight));
		mp[y].push_back(make_pair(x, weight));
		
	}

	void dijkstra(int src)
	{
		map<int,long long int> distance;
		set<pair<int,int> > minDist;
		for(auto  i : mp){
			distance[i.first] =inf;
		}
		
		distance[src] = 0;
		minDist.insert(make_pair(distance[src],src));
		while(!minDist.empty())
		{
			auto miniDist = *(minDist.begin());
			int node = miniDist.second;
			int nodeDist = miniDist.first;
			minDist.erase(minDist.begin());

			for(auto nbr : mp[node])
			{
				if((nodeDist + nbr.second) < distance[nbr.first])
				{
					auto findinSet = minDist.find(make_pair(distance[nbr.first],nbr.first));
					if(findinSet != minDist.end())
					{
						minDist.erase(findinSet);
					}
					distance[nbr.first] = nodeDist+nbr.second; 
					minDist.insert(make_pair(distance[nbr.first],nbr.first));
					
				}
			}
		}

		for(int i = 1; i <= vertices;i++)		
		{
			if(!distance.count(i) or distance[i] == inf) // doubt
			{
				distance[i] = -1;
			}
			
		}
		for (auto vr : distance)
		{
			
			if(vr.second != 0)
            {
                	cout<<vr.second<<" ";
            }
			
		}
		cout<<endl;

	}
    void printList ()
	{
		for(auto pr : mp )
		{
			int vertex = pr.first;
			list<pair<int,int > > neighbours = pr.second;
			cout<< vertex <<"-->";

			for(auto nbr : neighbours)
			{
				cout<<"( "<<nbr.first <<" "<<nbr.second<<" )";
			}
			cout<<endl;
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
		for (int i= 0; i< m; ++i)
		{
			int u,v,wt;
			cin>>u>>v>>wt;
			g.addEdge(u,v,wt);
		}

		int s;
		cin>>s;
		g.dijkstra(s);
    
	}

	return 0;
}