#include <bits/stdc++.h>
using namespace std;
class node
{
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

node * buildtree()
{
	int d;
	cin>>d;
	queue<node*>q;
	node* root=NULL;
	if(d!=-1)
	{
		root=new node(d);
		q.push(root);
	}
	else
	{
		return NULL;
	}
	while(!q.empty())
	{
		int c1,c2;
		node* temp=q.front();
		cin>>c1;
		if(c1!=-1)
		{
			temp->left=new node(c1);
			q.push(temp->left);
		}
		else
		{
			temp->left=NULL;
		}
		cin>>c2;
		if(c2!=-1)
		{
			temp->right=new node(c2);
			q.push(temp->right);
		}
		else
		{
			temp->right=NULL;
		}
		q.pop();

	}
	return root;
}

 void leftView(node * root)
 {
 	if(root==NULL)
 	{
 		return;
 	}
 	leftView(root->left);
 	cout<<root->data<<" ";

 } 
 void rightView(node* root)
 {
 	if(root==NULL)
 	{
 		return;
 	}
 	cout<<root->data<<" ";
 	rightView(root->right);

 }

 void topView(node* root)
 {
 	if(root==NULL)
 	{
 		return;
 	}
 	leftView(root->left);
 	cout<<root->data<<" ";
	rightView(root->right);
 }

int main(int argc, char const *argv[])
{
	node* root=buildtree();
	topView (root);

	
	
	return 0;
}
