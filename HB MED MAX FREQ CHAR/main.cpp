#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int freq[127]={0};
    int i=0;
    while(i<l)
    {
        freq[s[i]]++;
        i++;
    }
  /** for(int i=0;i<26;i++)
    {
        cout<<freq[i]<<",";

    }
    cout<<endl;**/
    int current=INT_MIN;
    int maximum=0;
    for(int j=0;j<127;j++)
    {
        if(freq[j]>current)
        {
            current=freq[j];
            maximum=j;
        }
    }
    char k=maximum;
    cout<<k;

    return 0;
}
