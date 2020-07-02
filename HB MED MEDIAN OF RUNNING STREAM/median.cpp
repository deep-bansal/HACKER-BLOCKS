#include<bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int> > minheap;
priority_queue<int> maxheap;

void add(int num)
{
	if (!minheap.empty() and num > minheap.top())
	{
		minheap.push(num);
	}
	else
	{
		maxheap.push(num);
	}

	if (fabs(minheap.size() - maxheap.size()) > 1)
	{
		if (minheap.size() > maxheap.size())
		{
			maxheap.push(minheap.top());
			minheap.pop();
		}
		else
		{
			minheap.push(maxheap.top());
			maxheap.pop();
		}

	}

}

float getMedian()
{
	if (maxheap.size() > minheap.size())
	{
		return maxheap.top();
	}
	else if (maxheap.size() < minheap.size())
	{
		return minheap.top();
	}
	else
	{
		return (minheap.top() + maxheap.top()) / 2;
	}
}


int main(int argc, char const *argv[])
{

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		
		while (n > 0)
		{
			int d;
			cin >> d;

			add(d);
			cout<<getMedian()<<" ";
			n--;
			
		}

		cout << endl;
		while(!minheap.empty())
		{
			minheap.pop();
		}
		while(!maxheap.empty())
		{
			maxheap.pop();
		}

	}


}