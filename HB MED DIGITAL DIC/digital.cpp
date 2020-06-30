#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>
vector<string> ans;
class node
{
	public:
	char ch;
	unordered_map <int,node*> children;
	bool isTerminated;
	string wordInp;


	node(char w)
	{
		ch = w;
		isTerminated = false;
	}	
};

class trie
{
	node* root;
public:
	trie(){
		root = new node('\0');
	}

	void insert (string word)
	{
		node* temp =root;
		for (int i = 0; i < word.length(); ++i)
		{
			char currentChar = word[i];
			if(!temp ->children.count(currentChar))
			{
				node* child = new node(currentChar);
				temp -> children[currentChar] = child;

			}
			temp = temp ->children[currentChar];
		}
		temp-> isTerminated = true;
		temp-> wordInp = word;
	}

	void digital_DicHelper(node* currNode)
	{
		if(currNode->isTerminated == true)
		{
			ans.push_back(currNode->wordInp);
		}

	   for(auto child : currNode->children)
	   {
	   	  digital_DicHelper(child.second);
	   }
	}

	void digitalDic (string prefix)
	{
		node* temp = root;
		bool notPresent =false;
		for (int i = 0; i < prefix.length(); ++i)
		{
			char ch = prefix[i];
			if(!temp->children.count(ch))
			{
				notPresent = true;
				break;
			}
			temp = temp->children[ch];
		}
		if(notPresent == true)
		{
			insert(prefix);
			return;
		}
		else
		{
			digital_DicHelper(temp);
		}
	}
	
};

int main(int argc, char const *argv[])
{
	trie t;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		string word;
		cin>> word;
		t.insert(word);
	}
	int q;
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		string prefix;
		cin>>prefix;
		t.digitalDic(prefix);
		sort(ans.begin(),ans.end());
		for (int i = 0; i < ans.size(); ++i)
		{
			cout<<ans[i]<<endl;
		}
		ans.erase(ans.begin(),ans.end());
	}
	
	return 0;
}