#include<iostream>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int timeimp(deque <int> calling, queue <int> ideal, int n)
{
	int time=0;
	while(!ideal.empty())
	{
		if(ideal.front()==calling.front())
		{
			time+=1;
			ideal.pop();
			calling.pop_front();
		}
		else
		{
			while(calling.front()!=ideal.front())
			{
				int d=calling.front();
				calling.push_back(d);
				calling.pop_front();
				time+=1;
			}
		}
	}
	return time;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	deque<int> calling;
	queue<int> ideal;

	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		calling.push_back(data);
	}
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		ideal.push(d);
	}
	cout<<timeimp(calling,ideal,n)<<endl;
	return 0;
}
