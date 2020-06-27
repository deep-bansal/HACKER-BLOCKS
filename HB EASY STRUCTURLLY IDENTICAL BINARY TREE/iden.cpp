#include<bits/stdc++.h>
using namespace std;

class node{
public:
	string data;
	node* right;
	node* left;

	node(string d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* buildTree()
{
	string s;
	cin>>s;
	if(s=="false")
	{
		return 0;
	}
	if(s=="true")
	{
		cin>>s;
	}
	node* root=new node(s);
	root->left=buildTree();
	root->right=buildTree();
	return root;


}

bool structureidentical(node* a,node* b)
{
	if(a==NULL && b==NULL)
	{
		return true;
	}
	if(a!=NULL and b!=NULL)
	{
		bool leftsubtree=structureidentical(a->left,b->left);
		bool rightsubtree=structureidentical(a->right,b->right);
		return leftsubtree and rightsubtree;
	}
	return false;
}

void levelOrderWithNextLine(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (q.size() > 1) {
		node* front = q.front();
		if (front == NULL) {
			cout << endl;
			q.push(NULL);
		}
		else {
			cout << front->data << ", ";
			if (front->left) {
				q.push(front->left);
			}
			if (front->right) {
				q.push(front->right);
			}
		}
		q.pop();
	}
}

int main(int argc, char const *argv[])
{
	node* root1=buildTree();
	
	node* root2=buildTree();

	if(structureidentical(root1,root2))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}
