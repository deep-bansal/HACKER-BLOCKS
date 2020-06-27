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

node* buildtree(node* &root)
{
	pair<int,int> p;
	int n1,n2;
	cin>>n1>>n2;
	p=make_pair(n1,n2);
	
	int d=p.first;
	root=new node(d);
	
	if(p.second==0)
	{
		root->left==NULL;
		root->right==NULL;
		
	}	

	else if(p.second==1 )
		{
			root->left=buildtree(root->left);
		}
	else
	{
		root->left=buildtree(root->left);
		root->right=buildtree(root->right);
	}

	return root;


}
void print (node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);
}
int sum=0;
int sumatlevelk(node* root,int k)
{
	if(k==0)
	{
		sum+=root->data;
		return 0;
	}
	if(root->left)
	{
		sumatlevelk(root->left,k-1);
	}
	if(root->right)
	{
		sumatlevelk(root->right,k-1);
	}

}


int main(int argc, char const *argv[])
{
	node* root=NULL;
	buildtree(root);
	int k;
	cin>>k;
	sumatlevelk(root,k);
	cout<<sum<<endl;
	
	return 0;
}