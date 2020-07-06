#include <bits/stdc++.h>
using namespace std;

void redundantparenthesis(string str)
{
	int l=str.length();
	stack <char> st;
	bool isDup;
	for (int i = 0; i < l; ++i)
	{
		st.push(str[i]);
		isDup=true;
		if(st.top()==')')
		{
			st.pop();
			while(st.top()!='(')
			{
				st.pop();
			   isDup=false;
			}

			if(isDup==true)
			{
				cout<<"Duplicates"<<endl;
				break;
			}
			st.pop();
		}		
	}
	if(isDup==false)
	{
		cout<<"Not Duplicates"<<endl;

	}

		
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;

		redundantparenthesis(str);
	}
	return 0;
}