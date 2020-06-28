#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
string stringwindow(string str,string pat)
{
	int hashstr[256]={0};
	int hashpat[256]={0};
	int size1 = str.length();
	int size2 = pat.length();
	if (size1< size2)
	{
		return "No string";
	}
	int start=0,minlen=INT_MAX,count=0,startindex=-1;
	for(int i= 0 ; i<pat.length();i++)
	{
		hashpat[pat[i]]+=1;
	}
	for(int i=0; i <str.length(); i++)
	{
		hashstr[str[i]]++;
		if(hashpat[str[i]]!=0 and hashstr[str[i]]<= hashpat[str[i]])
		{
			count+=1;
		}
		if(count == size2)
		{
			while(hashpat[str[start]]==0 or hashstr[str[start]]>hashpat[str[start]])
			{
				if(hashstr[str[start]]>hashpat[str[start]])
				{
					hashstr[str[start]]-=1;
				}
				start++;
			}
			int lenwindow= i -start+1;
			if(minlen>lenwindow)
			{
				minlen = lenwindow;
				startindex = start; 

			}
		}

	}
	if(startindex == -1 )
	{
		return "No string";
	}
	else
	{
		return str.substr(startindex,minlen);
	}
}

int main() {
	string str;
	string pat;
	getline(cin,str);
	getline(cin,pat);
	cout<< stringwindow(str,pat)<<endl;
	return 0;
}