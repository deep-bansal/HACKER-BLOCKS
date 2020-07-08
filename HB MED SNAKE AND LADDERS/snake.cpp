# include <bits/stdc++.h>
# include <unordered_map>

using namespace std;

class graph
{
      map<int , list < int> > mp;

public:

	void addEdge(int x,int y)
	{
		mp[x].push_back(y);  
		
	}

	void shortestDist(int src,int dest)
	{
		queue <int> q;
		map<int ,int >distance;

		q.push(src);
		distance [src] = 0;
		while(!q.empty())
		{
			int frontnode = q.front();
			q.pop();
			for(auto nbr : mp[frontnode])
			{
				if(distance.count(nbr) == 0)
				{
					q.push(nbr);
					distance[nbr] = distance[frontnode] + 1;
				}
			}
		}

		cout<<distance[dest]<<endl;
		// for (auto dist : distance)
		// {
		// 	int vertex = dist.first;
		// 	cout << vertex << " -> " << dist.second<<" ";

		// }
		// cout << endl;

	}
	void printList ()
	{
		for(auto pr : mp )
		{
			int vertex = pr.first;
			list <int  > neighbours = pr.second;
			cout<< vertex <<"-->";

			for(auto nbr : neighbours)
			{
				cout<<nbr<<" ";
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
		int n;
		cin>>n;
		int board[n+1] ={0};
		int l,s;
		cin>>l;
		cin>>s;
		for (int i = 1; i <= l ; ++i)
		{
			int src,dest;
			cin>>src>>dest;
			int x= dest -src;
			board[src] = x;
		}
		
		for (int i = 1; i <= s ; ++i)
		{
			int dest,src;
			cin>>dest>>src;
			int x = dest -src; 
			board[src] = x;
		}
		graph g;

		for (int i = 1; i <= n ; ++i)
		{
			for (int dice = 1; dice <= 6 ; ++dice)
			{
				int j = i+dice;
				j+= board[j];

				if(j <= n)
				{
					g.addEdge(i,j);
				}
			}
			g.addEdge(n,n);
			
		}
		g.shortestDist(1,n);


	}

	
	return 0;
}