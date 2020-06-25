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
node* insert(node* root,int data)
{
    if(root==NULL)
    {
        root=new node(data);
        return root;
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

void buildbst(node* &root,int* arr,int start,int end)
{
    if(start>end)
    {
        return;
    }
    int midnode= (start+(end-start)/2);
    root=insert(root,arr[midnode]);

    buildbst(root->left,arr,start,midnode-1);
    buildbst(root->right,arr,midnode+1,end);

}
void print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}




int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        node* root=NULL;
        buildbst(root,arr,0,n-1);
        print(root);
        cout<<endl;


    }
    
    return 0;
}