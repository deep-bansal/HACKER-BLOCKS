#include <bits/stdc++.h> 
#include <iostream> 
using namespace std; 
  
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> arr;
        for (int i = 0; i < n; ++i)
        {
           long long int y;
            cin>>y;
            arr.push_back(y);
        }
        sort(arr.begin(),arr.end());
        // int i = 0, j =n-1;
        // long long int maxDiff = 0;
        // while(i<j)
        // {
        //  maxDiff+= abs(arr[i] - arr[j]);
        //  i++;j--;
        // }

       long long int minDiff = 0;
        for (int i = 0; i < n-1; i+=2)
        {
            minDiff+= abs(arr[i] - arr[i+1]);
        }
        
        int x = n/2;
        long long int maxDiff = 0;
        for (int i = 0; i < x; ++i)
        {
            maxDiff += abs(arr[i] - arr[x+i]);
        }
        cout<<minDiff<<" "<<maxDiff<<endl;
    }


    return 0;
}