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

ostream& operator << (ostream& os,node* &head)
{
    printlist(head);
    return os;
}

int intersectionpoint(node*head1,node*head2)
{
    node*temp1=head1;
    node*temp2=head2;
    while(temp1!=NULL)
    {
        while(temp2!=NULL)
        {
            if(temp2->data==temp1->data)
            {
                return temp2->data;
            }
            temp2=temp2->next;
        }
        temp2=head2;
        temp1=temp1->next;
    }
    return -1;
}

int intersectionpointOpt(node* head1,node* head2)
{
    int length1=length(head1);
    int length2=length(head2);
    int diff= abs(length1-length2);
    if(length1>=length2)
    {
        node* temp1= head1;
        while(diff!=0)
        {
            temp1=temp1->next;
            diff--;
        }
        node * temp2=head2;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->data==temp2->data)
            {
                return temp1->data;

            }
           temp1=temp1->next;
           temp2=temp2->next;

        }

    }
    else
    {
        node* temp2= head2;
        while(diff!=0)
        {
            temp2=temp2->next;
            diff--;
        }
        node * temp1=head1;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->data==temp2->data)
            {
                return temp1->data;

            }
            temp1=temp1->next;
            temp2=temp2->next;

        }
    }
    return -1;
}

int main()
{
    node*head1=NULL;
    node*head2=NULL;
    int n1;
    cin>>n1;
    buildLinkedlist(head1,n1);
    int n2;
    cin>>n2;
    buildLinkedlist(head2,n2);
   
   cout<< intersectionpointOpt(head1,head2)<<endl;
    //cout<<intersectionpoint(head1,head2)<<endl;

 






    return 0;
}


