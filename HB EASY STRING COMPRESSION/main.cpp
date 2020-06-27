#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i=0,j=1,count=0;
    while(i<str.length())
    {

        if(str[i]==str[j])
        {
            count++;
            j++;
            i++;

        }
        if(str[i] !=str[j])
        {
            cout<<str[i]<<count+1;
            count=0;
            i++;
            j++;
        }

    }
    return 0;
}
