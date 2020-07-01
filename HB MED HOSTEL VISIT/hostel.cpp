#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(int argc, char const *argv[])
{
	int n, k;
	cin >> n >> k;

	priority_queue <ll> pq;

	while (n > 0)
	{
		int d;
		cin >> d;

		if (d == 1)
		{
			ll n1, n2;
			cin >> n1 >> n2;
			ll dist = pow(n1, 2) + pow(n2, 2);
			if (pq.size() == k)
			{
				if (dist < pq.top())
				{
					pq.pop();
					pq.push(dist);
				}

			}
			else
			{
				pq.push(dist);

			}
		}
		if (d == 2)
		{
			cout << pq.top() << endl;
		}

		n--;
	}

	return 0;
}