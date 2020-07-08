#include <bits/stdc++.h>

using namespace std;
bool palindrome(string str)
{
     int n=str.length();

    if(n==0 || n==1)
    {
        return true;
    }

    if(str.length()>=2 && str[0]==str[n-1] && palindrome(str.substr(1,n-2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    getline(cin,str);
    if(palindrome(str))
    {
        cout<<"true"<<endl;
    }
    else
        {
        cout<<"false"<<endl;}


    return 0;
}
