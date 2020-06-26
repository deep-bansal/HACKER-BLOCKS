#include<bits/stdc++.h>
using namespace std;
void Subseq(string input,string output,vector <string> &sub)
{
    if(input.length()==0)
    {
      sub.push_back(output);
       return;
    }
    char ch=input[0];
    string ros=input.substr(1);
    Subseq(ros,output,sub);
    Subseq(ros,output+ch,sub);
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
	string str;
	cin>>str;
	vector<string> sub;
	Subseq(str,"",sub);
	sort(sub.begin(),sub.end());
	for(int i=0;i<sub.size();i++)
    {
        cout<<sub[i]<<endl;
    }
    }
	return 0;
}
