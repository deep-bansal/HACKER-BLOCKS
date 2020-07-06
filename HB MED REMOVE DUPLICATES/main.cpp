#include<bits/stdc++.h>
using namespace std;
void remdup(string input,string output,int n)
{
	if(n==0)
	{
		cout<<output<<endl;
		return;
	}

if(n>=2 && input[0]==input[1])
{
string osf=output;
string ros=input.substr(1);
remdup(ros,osf,n-1);
}
else
{
    string osf=output+input[0];
    string ros=input.substr(1);
    remdup(ros,osf,n-1);
}

}

int main() {
	string str;
	cin>>str;
	int n=str.length();
	remdup(str,"",n);


}
