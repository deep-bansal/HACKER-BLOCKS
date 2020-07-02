#include<bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node*left;
	node* right;
	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
int z=0;
node* buildtree(int* preorder,int* inorder,int start,int end)
{
	if(start>end)
	{
		return NULL;
	}

	node*root= new node (preorder[z]);
	int idx=-1;
	for(int j=start;j<=end;j++)
	{
		if(inorder[j]==preorder[z])
		{
			idx=j;
			break;
		}
	}
	z++;
	root->left=buildtree(preorder,inorder,start,idx-1);
	root->right=buildtree(preorder,inorder,idx+1,end);
	return root;
}

class nodeHelper{
public:
 bool isbst;
 int maximum;
 int minimum;
 int size;

 nodeHelper()
 {
 	isbst=true;
 	maximum=INT_MIN;
 	minimum=INT_MAX;
 	size=0;
 } 

};

nodeHelper largestBSTinBT(node* root)
{
	if(root==NULL)
	{
		return nodeHelper();
	}
	nodeHelper leftree=largestBSTinBT(root->left);
	nodeHelper righttree=largestBSTinBT(root->right);

	nodeHelper curr;
	if(leftree.maximum<=root->data and righttree.minimum>root->data
		and leftree.isbst and righttree.isbst)
	{
		curr.isbst = true;
		curr.maximum = max(righttree.maximum, root->data);
		curr.minimum = min(leftree.minimum, root->data);
		curr.size = leftree.size + righttree.size + 1;
	}
	else
	{
		curr.isbst=false;
		curr.size=max(leftree.size,righttree.size);
	}
	return curr;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int preorder[n];
	int inorder[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>preorder[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cin>>inorder[i];
	}
	node*root=buildtree(preorder,inorder,0,n-1);
	nodeHelper ans=largestBSTinBT(root);
	cout<<ans.size<<endl;

	

	return 0;
}