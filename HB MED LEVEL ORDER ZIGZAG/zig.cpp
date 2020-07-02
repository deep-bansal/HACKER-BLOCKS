#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
	int data;
	node *left;
	node *right;

	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
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
int height(node*root)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    int h=1+max(height(root->left),height(root->right));

    return h;
}

void kthLevelLtoR(node *root,int k)
{
	if(k == 0)
	{
		cout<<root->data<<" ";
		return;
	}
	kthLevelLtoR(root->left,k-1);
	kthLevelLtoR(root->right,k-1);
}
void kthLevelRtoL(node *root,int k)
{
	if(k == 0)
	{
		cout<<root->data<<" ";
		return;
	}
	if(root->right) kthLevelLtoR(root->right,k-1);
	if(root->left) kthLevelLtoR(root->left,k-1);
}
void levelOrderZigZag(node* root)
{
	int levels = height(root);

	for (int i = 1; i <= levels ; ++i)
	{
		if(i & 1)
		{
			kthLevelRtoL(root,i);
		}
		else
		{
			kthLevelLtoR(root,i);
		}
	}
}

int main()
{
	node *root = build("true");
	cout<<root->data<<" ";
	levelOrderZigZag(root);



	return 0;
}
