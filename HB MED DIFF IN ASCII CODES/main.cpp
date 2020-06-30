#include <bits/stdc++.h>

using namespace std;
void Diffinascii(string str)
{
    int l=str.length();
    int arr[l-1];
    for(int i=0;i<l;i++)
    {
            int x=str[i];
            int y=str[i+1];
            int ans= y-x;
            arr[i]=ans;

    }

    int i=0;
    int j=0;
    while(i<l)
    {
        cout<<str[i];
        i++;
        if(j<l-1)
        {
            cout<<arr[j];
            j++;
        }

    }

}

int main()
{
    string str;
    cin>>str;
    Diffinascii(str);
    return 0;
}
