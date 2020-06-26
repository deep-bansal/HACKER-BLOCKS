#include <bits/stdc++.h>

using namespace std;
string searchIn [] = { "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
                       "utkarsh", "divyam", "vidhi", "sparsh", "akku"};

void searchstring (string input,int i)
{
    if(i==11)
    {
        return;
    }
    string b=searchIn[i];
    int j=0;
    for(int i=0;i<b.length();i++)
    {
        if(b[i]==input[j])
        {
            j++;
        }
    }
    if(j==input.length())
    {
        cout<<b<<endl;
        return;
    }
    searchstring(input,i+1);

}
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void smartkeypad(string input,string output)
{
    if(input.length()==0)
    {
       searchstring(output,0);
        return;
    }
    int num=input[0]-'0';
    string str2=table[num];
    string ros=input.substr(1);
    for(int i=0;i<str2.length();i++)
    {
        char ch=str2[i];
        smartkeypad(ros,output+ch);
    }
}
int main()
{
    string str;
    cin>>str;
    smartkeypad(str,"");




    return 0;
}
