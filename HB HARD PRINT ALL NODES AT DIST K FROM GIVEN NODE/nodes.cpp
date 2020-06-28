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

void printnodesinsubtree(node* root,int d,vector<int>& v)
{
	if(root==NULL || d<0)
	{
		return;
	}
	if(d==0)
	{
		v.push_back(root->data);
		return;
	}
	printnodesinsubtree(root->left,d-1,v);
	printnodesinsubtree(root->right,d-1,v);

}

int printnodesatdistk(node* root,pair<int,int>p,vector<int>&v)
{
	if(root==NULL)
	{
		return -1;
	}
	if(root->data==p.first)
	{
		printnodesinsubtree(root,p.second,v);
		return 0;
	}
	int dLeft=printnodesatdistk(root->left,p,v);
	if(dLeft!=-1)
	{
		if(dLeft+1==p.second)
		{
			v.push_back(root->data);
		}
		else
		{
			printnodesinsubtree(root->right,p.second-dLeft-2,v);
		}
		return dLeft+1;
	}
	int dRight=printnodesatdistk(root->right,p,v);
	if(dRight!=-1)
	{
		if(dRight+1==p.second)
		{
			v.push_back(root->data);
		}
		else
		{
			printnodesinsubtree(root->left,p.second-dRight-2,v);
		}
		return dRight+1;
	}
	return -1;
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
	int t;
	cin>>t;
	while(t--)
	{
		pair<int,int> p;
		int nodeval;
		int k;
		cin>>nodeval>>k;
		p=make_pair(nodeval,k);
		vector<int>ans;
		printnodesatdistk(root,p,ans);
		if(!ans.empty())
		{
			for(int i=0;i<ans.size();i++)
			{
				cout<<ans[i]<<" ";
			}
		}
		else
		{
			cout<<"0";
		}
		cout<<endl;
		ans.erase(ans.begin(),ans.end());

	}

	
	return 0;
}