// Given an array of numbers, program to arrange the numbers to form the
// largest number
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int myCompare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1 : 0;
}

void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);
    for (int i = 0; i < arr.size() ; i++ )
    {
        cout << arr[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> arr;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            string  d;
            cin >> d;
            arr.push_back(d);
        }
        printLargest(arr);
        cout<<endl;
    }

    return 0;
}