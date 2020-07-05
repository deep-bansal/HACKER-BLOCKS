#include <bits/stdc++.h>

using namespace std;

void MoveX(string input,string output1,string output2)
{
    if(input.length()==0)
    {
       cout<<output1<<output2;
    }
    if(input.length()>0 && input[0]=='x')
    {
        string ros=input.substr(1);
        string osf2=output2+"x";
        MoveX(ros,output1,osf2);
    }
    if(input.length()>0 && input[0]!='x')
    {
        string ros=input.substr(1);
        string osf1=output1+input[0];
        MoveX(ros,osf1,output2);
    }
}
int main()
{
    string str;
    cin>>str;
    MoveX(str,"","");
    return 0;
}
