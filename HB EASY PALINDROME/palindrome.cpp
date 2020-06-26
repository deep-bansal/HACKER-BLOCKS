#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node*next;
    ///constructor
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertAtHead(node* &head,int data)
{
    if(head==NULL)
    {
        head=new node(data);
        return;
    }
    node*temp=new node(data);
    temp->next=head;
    head=temp; /// new head is temp node now
    return;
}
int length(node*head)
{
    int len=0;
    while(head->next!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}

void delAtHead(node* &head)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
    return;

}

void delAtTail(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        delAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return;
}
void delAtMiddle(node* &head,int p)
{
    if(p==1 || head==NULL || head->next==NULL)
    {
        delAtHead(head);
        return;
    }
    else if(p>=length(head))
    {
        delAtTail(head);
        return;
    }
    int jump=1;
    node* temp=head;
    while(jump<p-1)
    {
        jump++;
        temp=temp->next;
    }
    node* todel=temp->next;
    temp->next=temp->next->next;
    delete todel;
    return;
}

void insertAtTail(node* &head,int data)
{
    if(head==NULL)
    {
        head=new node(data);
        return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=new node(data);
    return;
}

void buildLinkedlist (node* &head,int n)
{
    while(n!=0)
    {
        int data;
        cin>>data;
        insertAtTail(head,data);
        n--;
    }
    return;

}
void printlist(node*head)
{
    while(head !=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


/**istream& operator >> (istream &is,node* &head)
{
    buildLinkedlist(head);
    return is;
}**/
ostream& operator << (ostream& os,node* &head)
{
    printlist(head);
    return os;
}
bool palindrome(node* head)
{
    stack<int>st;

    node* temp=head;
    while(temp!=NULL)
    {
        st.push(temp->data);
        temp=temp->next;
    }
    while(!st.empty())
    {
        if(st.top()==head->data)
        {
            st.pop();
            head=head->next;

        }
        else
        {
            return false;
        }

    }
    return true;

}

int main()
{
    node*head=NULL;
    int n;
    cin>>n;
    buildLinkedlist(head,n);
    if(palindrome(head))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }







    return 0;
}
