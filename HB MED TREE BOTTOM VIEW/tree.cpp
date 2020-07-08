#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* left;
	node* right;
	int hd;
	node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
		hd = INT_MAX;
	}

};

node * buildtree()
{
	int d;
	cin >> d;
	queue<node*>q;
	node* root = NULL;
	if (d != -1)
	{
		root = new node(d);
		q.push(root);
	}
	else
	{
		return NULL;
	}
	while (!q.empty())
	{
		int c1, c2;
		node* temp = q.front();
		cin >> c1;
		if (c1 != -1)
		{
			temp->left = new node(c1);
			q.push(temp->left);
		}
		else
		{
			temp->left = NULL;
		}
		cin >> c2;
		if (c2 != -1)
		{
			temp->right = new node(c2);
			q.push(temp->right);
		}
		else
		{
			temp->right = NULL;
		}
		q.pop();

	}
	return root;
}

void printBottomView(node* root)
{
	if (root == NULL)
	{
		return;
	}
	map<int, int> mp;
	queue<node*>q;
	int hd = 0;
	root -> hd = hd;
	q.push(root);
	while (!q.empty())
	{
		node* frontNode = q.front();
		q.pop();
		hd = frontNode ->hd;
		mp[hd] = frontNode->data;
		if (frontNode->left != NULL)
		{
			frontNode ->left ->hd = hd - 1;
			q.push(frontNode->left);
		}
		if (frontNode->right != NULL)
		{
			frontNode ->right ->hd = hd + 1;
			q.push(frontNode->right);
		}

	}

	for (auto i : mp)
	{
		cout << i.second << " ";
	}
}

int main(int argc, char const *argv[])
{
	node* root = buildtree();
	printBottomView(root);






	return 0;
}