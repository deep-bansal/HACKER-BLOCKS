#include <bits/stdc++.h>
using namespace std;
typedef pair <int, pair<int,int> >node;



vector <int> mergeKSortedArray(vector <vector<int> >v)
{
	priority_queue <node, vector <node> , greater<node> >pq;
	int k=v.size();

	vector <int> result;
	int i=0;
	while(i<k)
	{
		node ele = make_pair(v[i][0],make_pair(i,0));
		pq.push(ele);
		i++;
	}
	while(!pq.empty())
	{
		node topEle=pq.top();
		result.push_back(topEle.first);
		pq.pop();

		int arrnum=topEle.second.first;
		int idx=topEle.second.second;

		if(idx+1 < v[arrnum].size())
		{
			node ele = make_pair(v[arrnum][idx+1],make_pair(arrnum,idx+1));
			pq.push(ele);
		} 
	}

	return result;

}
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>k>>n;

	vector <vector<int> >vec;

	for(int i=0;i<k;i++)
	{
		vector<int> v1;
		for(int j=0; j<n; j++)
		{
			int data;
			cin>>data;
			v1.push_back(data);
		}
		vec.push_back(v1);
	}	


	vector<int> result = mergeKSortedArray(vec);
	for (int i = 0; i < result.size(); ++i)
	{
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}