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

vector <int> v;

node* insert(node* &root,int d)
{
	if(root==NULL)
	{
		root=new node(d);
		return root;
	}
	if(d<=root->data)
	{
		root->left=insert(root->left,d);
	}
	else
	{
		root->right=insert(root->right,d);
	}
	return root;
}

void buildbst(node* &root,int n)
{
	while(n!=0)
	{
		int d;
		cin>>d;
		insert(root,d);
		n--;
	}

}

void keysinrange(node* root,int k1,int k2)
{
	if(root==NULL)
	{
		return;
	}
	if(root->data>=k1 and root->data<=k2)
	{
		v.push_back(root->data);
	}
	keysinrange(root->left,k1,k2);
	keysinrange(root->right,k1,k2);
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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		node* root=NULL;
		buildbst(root,n);
		int k1,k2;
		cin>>k1>>k2;
		cout<<"# Preorder : ";
		print(root);
		cout<<endl;
		cout<<"# Nodes within range are : ";
		keysinrange(root,k1,k2);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		v.erase(v.begin(),v.end());
	}
	
	return 0;
}