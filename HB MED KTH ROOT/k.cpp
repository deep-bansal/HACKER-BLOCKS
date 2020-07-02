#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long start = 1, end = sqrt(n);
        int maxAns = 0;
        bool flag = false;
        if (k == 1)
        {
            maxAns = n;
            flag = true;
        }
        while (start <= end)
        {
            if (flag == false)
            {
                int mid = start + (end - start) / 2;
                if (pow(mid, k) <= n)
                {
                    maxAns = max(mid, maxAns);
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
            else
            {
                break;
            }
        }
        cout << maxAns << endl;


    }
    return 0;
}