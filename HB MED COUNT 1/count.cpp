#include<bits/stdc++.h>
using namespace std;

int max_length = 0;
int dp[2001][2001];

int count1(int* arr,int n,int i,int j, int k)
{
    if (i == n)
    {
        return 0;
    }

    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if (arr[i] == 1 || k > 0 )
    {
        max_length = max(max_length, i - j + 1);

        if (arr[i] == 0)
        {
            count1(arr, n,i+1,j, k - 1);
        }
        else
        {
            count1(arr, n,i+1,j, k);
        }       
    }
    else if (arr[i] == 0 and k <= 0)
    {
        if (arr[j] == 0)
        {   
            k++;
        }
        count1(arr,n,i,j+1,k);
    }
    dp[i][j] = max_length;
    return max_length;
}

void count1SlidingWindow(int* arr ,int n,int k)
{
    int i = 0, j= 0, bestWindow = 0,zeroCount= 0,bestL = 0;
    while(i < n)
    {
        if(zeroCount <= k)
        {
            if(arr[i] == 0)
            {
                zeroCount++;
            }
            i++;
        }
        if(zeroCount > k)
        {
            if(arr[j]==0)
            {
                zeroCount--;
            }
            j++;
        }
        if((i-j) > bestWindow )
        {
            bestWindow = i-j;
            bestL = j;
        }

    }
    cout<<bestWindow<<endl;
    for (int i = 0; i < bestL; ++i)
    {
        cout<<arr[i]<<" ";
    }
    for (int i = bestL; i < bestL + bestWindow ; ++i)
    {
        if(arr[i] == 0)
        {
            arr[i] = 1;
        }
        cout<<arr[i]<<" ";
    }
    for (int i = bestL+bestWindow; i < n; ++i)
    {
        cout<<arr[i]<<" ";
    }
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    memset(dp,-1,sizeof(dp));
   // cout << count1(arr, n,0,0, k) << endl;
    count1SlidingWindow(arr,n,k);
   
    return 0;
}