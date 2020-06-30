#include<bits/stdc++.h>
using namespace std;
#define  ll long long

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int freq[1000000];
	 int maximum = INT_MIN;
	 int minimum = INT_MAX;
	memset(freq,0,sizeof(freq));
	for (int i = 0; i < n; ++i)
	{
		int d;
		cin >> d;
		maximum = max(maximum,d);
		minimum = min(minimum,d);
		freq[d]++;
	}

	vector<int> output;

	for (int i = minimum; i <= maximum; ++i)
	{
		if (freq[i] > 0)
		{
			while (freq[i] > 0)
			{
				output.push_back(i);
				freq[i]--;
			}

		}

	}
	for (int i = 0; i < output.size(); ++i)
	{
		cout << output[i] << " ";
	}

	return 0;
}