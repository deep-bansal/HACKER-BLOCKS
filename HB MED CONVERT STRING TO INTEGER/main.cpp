#include <bits/stdc++.h>
using namespace std;
///prob in compiler code is correct
int sti(string input)
{
    if(input.length()==0)
    {
        return 0 ;
    }
    int p=(input[0]-'0')*pow(10,input.length()-1);
    string ros=input.substr(1);
    int sum=0;
    sum=p+ sti(ros);
    return sum;
}

int main(){

string str;
cin>>str;
cout<<sti(str);
return 0;
}
