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

node* buildtree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node* root=new node(d);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}

node* A=NULL;
node* B=NULL;
node* pred=NULL;

void recoverbst(node* root)
{
    if(root==NULL)
    {
        return;
    }
    recoverbst(root->left);
    if(pred!=NULL and root->data<pred->data)
    {
        B=root;
        if(A==NULL)
        {
            A=pred;
        }
        else
        {
            return;
        }
    }
    pred=root;
    recoverbst(root->right);
}

int main(int argc, char const *argv[])
{
    node* root=buildtree();
    recoverbst(root);
    cout<<min(A->data,B->data)<<" "<<max(A->data,B->data)<<endl;
    return 0;
}