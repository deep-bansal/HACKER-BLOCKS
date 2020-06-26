#include <bits/stdc++.h>
using namespace std;
class node{

public:
	int data;
	node* left;
	node* right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

node *build(string s)
{
    if (s == "true")
    {
        int d;
        cin >> d;
        node *root = new node(d);
        string l;
        cin >> l;
        if (l == "true")
        {
            root->left = build(l);
        }
        string r;
        cin >> r;
        if (r == "true")
        {
            root->right = build(r);
        }
        return root;
    }
    return NULL;
}

class Pair
{
public:
	bool isbalanced;
	int height;
};

Pair istreebalanced (node* root)
{
	Pair p;
	if(root==NULL)
	{
		p.isbalanced=true;
		p.height=-1;
		return p;
	}
	if(root->left==NULL and root->right==NULL)
	{
		p.isbalanced=true;
		p.height=0;
		return p;
	}

	Pair lefttree=istreebalanced(root->left);
	Pair righttree=istreebalanced(root->right);
	p.height=max(lefttree.height,righttree.height)+1;

	if((abs(lefttree.height - righttree.height)<=1) and lefttree.isbalanced== true and 
		righttree.isbalanced==true)
	{
		
		p.isbalanced=true;
	}
	else
	{
		p.isbalanced=false;

	}
	return p;
}


void print(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);

}
int main(int argc, char const *argv[])
{
	node* root=build("true");
	Pair ans=istreebalanced(root);
	if(ans.isbalanced)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false";
	}

	
	
	return 0;
}