#include<bits/stdc++.h>
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

node* insert(node* root,int data)
{
	if(root==NULL)
		{
			return new node(data);
		}

	if(data<=root->data)
	{
		root->left=insert(root->left,data);
	}

	else
		{
			root->right=insert(root->right,data);
		}

	return root;		
}

node* deleteInBST(node* root, int key) 
{
	if (root == NULL) 
    {
		return NULL;
	}
    else 
	if (key < root->data) 
    {
		root->left = deleteInBST(root->left, key);
        return root;
	}
	else 
    if (key == root->data) 
    {
        //node found
		//node is leaf node
		if (root->left == NULL and root->right == NULL)
         {
			delete root;
			return NULL;
		}
		//node has only left child
		if (root->left != NULL and root->right == NULL) 
        {
			node* temp = root->left;
			delete root;
			return temp;
		}
		//node has only right child
		if (root->left == NULL and root->right != NULL) 
        {
			node* temp = root->right;
			delete root;
			return temp;
		}
		//node has both child
			//replacing node with left subtree's max

			node* temp = root->right;

			while (temp->left!=NULL) 
            {
				temp = temp->left;
			}
			root->data = temp->data; //temp = max of left subtree
			root->right = deleteInBST(root->right, temp->data);
			return root;
	  }
      else
      {
          root->right=deleteInBST(root->right,key);
          return root;
      }
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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
	
        node *root=NULL;

		for (int i = 0; i < n; ++i)
		{
			int data;
			cin>>data;
            root=insert(root,data);
		}

		int k;
		cin>>k;
		for (int i = 0; i < k; ++i)
		 {
				int d;
                cin>>d;
                root=deleteInBST(root,d);
		 }		

		printbst(root);
		cout<<endl;

	}
	
	return 0;
}