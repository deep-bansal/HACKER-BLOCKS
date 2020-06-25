#include <bits/stdc++.h>

using namespace std;
void dicsmaller(string input,string output,vector<string>& v1)
{
    if(input.length()==0)
    {
        v1.push_back(output);
        return;
    }
    for(int i=0;i<input.length();i++)
    {
        char ch=input[i];
        string ros=input.substr(0,i)+input.substr(i+1);
        dicsmaller(ros,output+ch,v1);

    }
}
int main()
{
    string str;
    cin>>str;
    vector<string> v1;
    dicsmaller(str,"",v1);
    sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]!=v1[i+1])
        {
            cout<<v1[i]<<endl;
        }

    }
}

