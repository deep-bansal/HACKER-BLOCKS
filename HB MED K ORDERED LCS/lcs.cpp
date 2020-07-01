#include <bits/stdc++.h>
using namespace std;
#define MAX 350

int  dp[2001][2001][6];
int KorderedLcs(int* s1, int* s2, int i, int j, int k, int lenS1, int lenS2) {
	if (i == lenS1 or j == lenS2) {
		return 0;
	}

	if (dp[i][j][k] != -1) {
		return dp[i][j][k];
	}
	int ans = 0;
	if (s1[i] == s2[j]) {
		ans =  1 + KorderedLcs(s1, s2, i + 1, j + 1, k, lenS1, lenS2);
	}

	else {

		int case1 = KorderedLcs(s1, s2, i + 1, j, k, lenS1, lenS2);
		int case2 = KorderedLcs(s1, s2, i, j + 1, k, lenS1, lenS2);

		int case3 = -1;
		if (k > 0) {
			case3 = 1 + KorderedLcs(s1, s2, i + 1, j + 1, k - 1, lenS1, lenS2);
		}

		ans = max(case1, max(case2, case3));
	}

	dp[i][j][k] = ans;

	return ans;
}



int main(int argc, char const *argv[])
{

    int n,m,k;
    cin>>n>>m>>k;

	int arr1[n];
	for(int i = 0; i<n;i++)
    {
     cin>>arr1[i];
    }
    int arr2[m];
    for(int i = 0; i<m;i++)
    {

        cin>>arr2[i];
    }

	memset(dp,-1,sizeof(dp));

	cout << KorderedLcs(arr1, arr2, 0, 0, k, n, m) << endl;


	return 0;
}
