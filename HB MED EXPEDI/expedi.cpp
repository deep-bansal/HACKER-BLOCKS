#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
	return p1.first > p2.second;
}

int main(int argc, char const *argv[])
{
	int n;
	int flag = 0, ans = 0;
	cin >> n;
	vector<pair<int, int> > v;
	priority_queue<int>pq;
	for (int i = 0; i < n; ++i)
	{
		int d, f;
		cin >> d >> f;
		v.push_back(make_pair(d, f));
	}
	sort(v.begin(), v.end(), compare);
	int L, F;
	cin >> L >> F;

	for (int i = 0; i < n ; ++i)
	{
		v[i].first = L - v[i].first;
	}

	int x = 0, prev = 0;
	while (x < n)
	{
		/// having enough fuel
		if (F >= (v[x].first - prev))
		{
			F = F - (v[x].first - prev);
			pq.push(v[x].second);
			prev = v[x].first;
		}
		else
		{
			if (pq.empty())
			{
				flag = 1;
				break;
			}
			F += pq.top();
			pq.pop();
			ans++;
			continue;
		}
		x++;
	}
	if (flag == 1)
	{
		cout << -1 << endl;
	}
	else
	{
		L = L - v[n - 1].first;
		if (F >= L)
		{
			cout << ans << endl;
		}
		else
		{
			while (F < L)
			{
				if (pq.empty())
				{
					flag = 1;
					break;
				}
				F += pq.top();
				pq.pop();
				ans++;
			}
			if (flag == 1)
			{
				cout << -1 <<endl;
			}
			else
			{
				cout<<ans<<endl;
			}

		}
	}


	return 0;
}