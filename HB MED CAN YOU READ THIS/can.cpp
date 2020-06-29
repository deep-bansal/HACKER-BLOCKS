#include<bits/stdc++.h>
using namespace std;
int i=0;
void canYouReadThis(string input,string output)
{
	int i;
	for( i=0;i<input.length();i++)
 {
	int x=input[i];
	int y=input[i+1];
	if(x>=65 and x<=90 and y>=65 and y<=90)
	{
		cout<<input[i]<<endl;
	}
	else if(x>=65 and x<=90 and y>=97 and y<=122)
	{
		output+=input[i];
	}
	else if(y>=97 and y<=122 and x>=97 and x<=122)
	{
			output+=input[i];
	}
	else if(x>=97 and x<=122 and y>=65 and y<=90)
	{
		output+=input[i];
		cout<<output<<endl;
		output="";
	}
 }
    int x=input[input.length()-1];
    
    if(x>=65 and x<=90)
    {
    	cout<<output<<endl;
    	cout<<input[input.length()-1];
    }
    else
    {
    	cout<<output<<input[input.length()-1]<<endl;
    
    }
    
	


}

int main(int argc, char const *argv[])
{
	string input;
	cin>>input;
	canYouReadThis(input,"");

	return 0;
}