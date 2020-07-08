#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int key;
    cin>>str>>key;
    int l=str.length();
    int count[2]={0};
    int ans=0,i=0,left=0;
    while(i<l)
    {
        count[str[i]-'a']++;
        if(min(count[0],count[1])>key)
        {
            count[str[left]-'a']--;
            left++;
        }
        else
        {
            ans++;
        }
        i++;  ///helping in iterating
    }
    cout<<ans<<endl;



    return 0;
}
