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

int i=0;
node* buildtreebypreandin(int* pre,int* inorder,int start,int end)
{
    if(start>end)
    {
        return NULL;
    }

    node*root=new node (pre[i]);
    int idx=-1;
    for(int k=start;k<=end;k++)
    {
        if(inorder[k]==pre[i])
        {
            idx=k;
            break;
        }
    }
    i++;
    root->left=buildtreebypreandin(pre,inorder,start,idx-1);
    root->right=buildtreebypreandin(pre,inorder,idx+1,end);
    return root;
}



void printtree(node* root)
{
	if(root==NULL)
	{
		return;
	}

	if(root->left && root->right)
	{
		cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;
	}
	if(root->left && root->right==NULL)
	{
		cout<<root->left->data<<" => "<<root->data<<" <= END"<<endl;
	}
	if(root->right && root->left==NULL)
	{
		cout<<"END => "<<root->data<<" <= "<<root->right->data<<endl;
	}
	if(root->left==NULL and root->right==NULL)
	{
		cout<<"END => "<<root->data<<" <= END"<<endl;
	}
	printtree(root->left);
	printtree(root->right);

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int preorder[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>preorder[i];
	}
	int m;
	cin>>m;
	int inorder[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>inorder[i];
	}

	node* root=buildtreebypreandin(preorder,inorder,0,m-1);
	printtree(root);
	
	return 0;
}