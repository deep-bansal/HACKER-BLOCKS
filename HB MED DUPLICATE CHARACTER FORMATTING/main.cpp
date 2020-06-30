#include <bits/stdc++.h>

using namespace std;
void dupchar(string input,string output,int n)
{
    if(n==0)
    {
        cout<<output<<endl;
        return;

    }
    if(n>=2 && input[0]==input[1])
    {
        string osf=output+input[0]+"*";
        string ros=input.substr(1);
        dupchar(ros,osf,n-1);
    }
    else
    {
        string osf=output+input[0];
        string ros=input.substr(1);
        dupchar(ros,osf,n-1);
    }

}

int main()
{
   string input;
   cin>>input;
   int n=input.length();
   dupchar(input,"",n);
    return 0;
}
