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

void printlist(node*head)
{
    while(head !=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
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

void insertAtMiddle(node* &head,int data,int p)
{
    if(head==NULL || p==0)
    {
        insertAtHead(head,data);
    }
    else if(p>length(head))
    {
        insertAtTail(head,data);
    }
    else
    {
        int jump=1;
        node*temp=head;
        while(jump<=p-1)
        {
            temp=temp->next;
            jump++;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}

node* evenafterodd (node* &head){
    node* head2 = NULL ;
    node* temp = head ;
	int i=0 ;
	while(temp != NULL){
        int val=temp->data ;
        if(val!=0 && val%2 ==0 ){
            insertAtTail(head2,val);
        }
        else if(val!=0 && val%2 !=0)
        {
            insertAtMiddle(head2,val,i);
			i++ ;
        }
		temp=temp->next ;
	}
	return head2 ;
}
int main() {
	int n ,data ;
	cin >> n ;
	node* head=NULL;
	for(int i=0 ;i<n ;i++){
		cin >> data ;
		insertAtTail(head,data) ;
	}
	node* head2= evenafterodd(head) ;
	printlist(head2) ;
	return 0;
}