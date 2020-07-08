#include<bits/stdc++.h>
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

node* insert(node* root,int d)
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

node* buildtree(int* arr,int start,int end)
{
	if(start>end)
	{
		return NULL;
	}

	int mid=start+(end-start)/2;
	node* root= new node(arr[mid]);
	root->left=buildtree(arr,start,mid-1);
	root->right=buildtree(arr,mid+1,end);

	return root;	
}

void replacewithsum(node* & root,int* sum)
{
	if(root == NULL ) return;

	replacewithsum(root->right,sum);
	*sum+= root->data;  //address mangvaya h to derefrencing kr rhe h yha
  	root->data= *sum;
	replacewithsum(root->left,sum);
}

void printbst(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	printbst(root->left);
	printbst(root->right);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	node* root=buildtree(arr,0,n-1);
	
	int sum=0;
	replacewithsum(root,&sum);

	printbst(root);
	
	return 0;
}